#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - This is a function to append
 * a text at the endof the file
 * @filename: This is the name of the file to append to
 * @text_content: This is the string to append to the file
 * Return: Return 1 if successful and -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int apd;
	ssize_t write_t;

	if (filename == NULL)
		return (-1);

	apd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (apd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_t = write(apd, text_content, strlen(text_content));
		if (write_t == -1)
			return (-1);
	}

	close(apd);

	return (1);
}
