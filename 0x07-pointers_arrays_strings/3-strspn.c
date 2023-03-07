#include "main.h"
#include <stdio.h>
/**
 * _strspn - write a function that gets the length of a prefix
 * @s: string
 * @accept: input
 * Return: Always
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
			return (i);
	}
	return (i);
}
