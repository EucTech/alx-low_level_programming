#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *k = needle;

		while (*i == *k && *k != '\0')
		{
			i++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (NULL);
}
