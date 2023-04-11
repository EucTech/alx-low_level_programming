#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * copy_file - This is a function that copies a file content form
 * @file_from: file source
 * @file_to: file destination
 * Return: 0 After
 */
void copy_file(char *file_from, char *file_to)
{
	int ff, ft;
	ssize_t read_f, write_f;
	char buff[1024];

	ff = open(file_from, O_RDONLY);
	if (ff == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((read_f = read(ff, buff, 1024)) > 0)
	{
		write_f = write(ft, buff, read_f);
		if (write_f != read_f)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (read_f == 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(ff) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
}

/**
 * main - checks code
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
