#include "main.h"
/**
 * _strlen - to write a funtion that returns the lenth of a string
 * @s: integer
 * Return: Always
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char d = s[0];

	while (d != '\0')
	{
		sum++;
		d = s[i++];
	}
	return (sum);
}
