#include "main.h"

/**
 * read_textfile - This is a program that read a textfile in c
 * @filename: This is a pointer to the file name I want to read
 * @letters: This is the letters in the textfile to be printed
 * Return: Read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, fp;
	char *buffer_size;

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer_size = malloc(sizeof(char) * letters + 1);

	if (buffer_size == NULL)
		return (0);

	reader = read(fp, buffer_size, letters);

	if (reader == -1)
		return (0);

	if (write(STDOUT_FILENO, buffer_size, reader) != reader)
	{
		return (0);
	}

	free(buffer_size);

	close(fp);

	return (reader);
}
