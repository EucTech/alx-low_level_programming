#include "main.h"

/**
 * append_text_to_file - This is a function that appends text to file
 * @filename: This is a pointer to the file to be appended
 * @text_content: This is a pointer to the content of the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wrt_file;
	int fpd;

	if (filename == NULL)
		return (-1);

	fpd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fpd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrt_file = write(fpd, text_content, strlen(text_content));
		if (wrt_file == -1)
			return (-1);
	}

	close(fpd);
	return (1);
}
