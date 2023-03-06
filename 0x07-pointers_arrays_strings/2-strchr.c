#include "main.h"
#include "stdio.h"
/**
 * _strchr - a function that locates a character
 * @s: string
 * @c: character input
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

