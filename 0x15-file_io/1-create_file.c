#include <stdio.h>
#include <string.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - A function that creates a text file
 * @filename: The name of the file to create
 * @text_content: The string to write
 * Return: return 1 if successful and -1 if failed.
 */

int create_file(const char *filename, char *text_content)
{
	int crt;
	ssize_t wrt_b;

	if (filename == NULL)
		return (-1);

	crt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (crt == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	wrt_b = write(crt, text_content, strlen(text_content));

	if (wrt_b == -1)
	{
		close(crt);
		return (-1);
	}

	close(crt);
	return (1);
}
