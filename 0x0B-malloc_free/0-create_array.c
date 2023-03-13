#include "main.h"
#include <stdlib.h>
/**
 * create_array - this is a function that creates an array
 * of chars and intializes it with a specific char
 * @size: size of the array
 * @c: the array
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc((size + 1) * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
