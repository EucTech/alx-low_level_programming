#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#define size 1024
/**
 * copy_file - This is a function that copies a file content form
 * @file_from: file source
 * @file_to: file destination
 * Return: 0
 */
void copy_file(char *file_from, char *file_to)
{
	ssize_t ff, ft, read_f, write_f;
	char buff[size];

	ff = open(file_ifrom, O_RDONLY);
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
	while ((read_f = read(ff, buff, size)) > 0)
	{
		write_f = write(ft, buff, read_f);
		if (write_f != read_f)
		{		
			exit(99);
		}
	}
	if (read_f == -1)
	{
		dprintf(2, "Error: Can't read to %s\n", file_from);
		exit(98);
	}
	if (close(ff) == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", file_from);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(2, "Error: Can't close fd %s\n", file_to);
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
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
