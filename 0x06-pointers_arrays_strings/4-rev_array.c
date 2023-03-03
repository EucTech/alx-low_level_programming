#include "main.h"
/**
 * reverse_array - write a function that reverse an array of integers
 * @a: array
 * @n: number of elements
 * Return: Always
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
