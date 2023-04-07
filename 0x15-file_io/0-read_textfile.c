#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: The name of the file
 * @letters: The number of letters to print
 * Return: number of letter read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_t;
	char text[1000];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_t = read(fd, text, letters);
	if (read_t == -1)
	{
		close(fd);

		return (0);
	}

	if (write(STDOUT_FILENO, text, read_t) != read_t)
	{
		close(fd);

		return (0);
	}

	close(fd);

	return (read_t);
}
