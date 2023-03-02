#include "main.h"
#include <string.h>
/**
 * _strncat - write a function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Always
 */
char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);

	return (dest);
}
