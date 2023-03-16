#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: scat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *scat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	scat = malloc(sizeof(char) * (i + n + 1));

	if (scat == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		scat[k] = s1[k];
	}

	for (l = 0; l < n; k++, l++)
	{
		scat[k] = s2[l];
	}
	scat[k] = '\0';

	return (scat);
}
