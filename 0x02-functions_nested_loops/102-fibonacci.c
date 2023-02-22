#include <stdio.h>
/**
 * main - A program that prints the first 50 fibonacci numbers
 * Return: Always
 */

int main(void)
{
	int c;
	long int n11, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = n2;
	}
	printf("\n");
	return (0);
}
