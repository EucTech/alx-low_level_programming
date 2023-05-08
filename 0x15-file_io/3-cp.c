#include "main.h"

/**
 * to_copy_file_from_to - This is a function that copies content of a file
 * @file_from: This is a char pointer to the source file
 * @file_to: This is a char pointer to the destinatin of the file
 * Return: The file copied
 */
void to_copy_file_from_to(char *file_from, char *file_to)
{
	char buffer[1024];
	ssize_t to_write, to_read;
	int cf, ct;

	cf = open(file_from, O_RDONLY);
	if (cf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ct = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (ct == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((to_read = read(cf, buffer, 1024)) > 0)
	{
		to_write = write(ct, buffer, to_read);
		if (to_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (to_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(cf) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", cf);
		exit(100);
	}
	if (close(ct) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ct);
		exit(100);
	}
}

/**
 * main - This main checks arguments
 * @ac: This is the number of argument counts
 * @av: This is the argument vector
 * Return: 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_copy_file_from_to(av[1], av[2]);

	return (0);
}
