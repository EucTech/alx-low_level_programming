#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - write a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	for (l = 0; l < j; k++, l++)
		strout[k] = s2[l];

	return (strout);
}
