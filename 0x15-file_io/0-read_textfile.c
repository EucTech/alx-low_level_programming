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
	ssize_t fd;
	ssize_t read_t; 
	char *buff_text;

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
		return (0);

	buff_text = malloc(sizeof(char) *letters + 1);
	if (buff_text == NULL)
		return (0);

	read_t = read(fd, buff_text, letters);
	if (read_t == -1)
		return (0);

	if (write(STDOUT_FILENO, buff_text, read_t) != read_t)
	{
		return (0);
	}

	free(buff_text);

	close(fd);

	return (read_t);
}
