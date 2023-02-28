#include "main.h"
/**
 * char *_strcpy - to write a function that copies the string
 * @dest: first
 * @src: second
 * Return: Always
 */

char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (guard);
}
