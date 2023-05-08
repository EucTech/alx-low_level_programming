#include "main.h"

/**
 * create_file - This is a func that  create, write and append a new file
 * @filename: This is a pointer to the name of the file
 * @text_content: This is the content of the file
 * Return: It should return 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t writing;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		writing = write(fd, text_content, strlen(text_content));

		if (writing == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
