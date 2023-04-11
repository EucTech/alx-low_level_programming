#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#define size 1024

/**
 * main - This is a function that copies a file content form
 * one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from;
	int file_to;
	ssize_t read_f, write_f;
	char buff[size];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*open the source file with read only*/

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

	/*open the destination file with write only*/

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	
	while ((read_f = read(file_from, buff, size)) > 0)
	{
		if ((write_f = write(file_to, buff, read_f)) != read_f)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
			exit(99);
		}
	}

	if (read_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to NAME_OF_THE_FILE");
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
