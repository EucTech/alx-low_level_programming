#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rot13 - a function that encodes a string using rot13
 * @s: variable
 * Return: Always
 */

char *rot13(char *s)
{
	int i, j, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 13; j++)
		{
		if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] += 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] -= 13;
		}
		}
	}
	return (s);
}
