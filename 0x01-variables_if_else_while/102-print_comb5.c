#include <stdio.h>
/**
 * main - To printf a code that print all combinations of two two-digit number
 * Return: Always
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
	for (b = a + 1; b < 99; b++)
	{
		if (a == 99 && b == 98)
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');

		putchar(' ');
	}
	for (a = 0; a < 100; a++)
	{
	for (b = 0; b < 99; b++)
	{
		if (a == 99 && a == 98)
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');

		putchar(',');
		putchar(' ');
	}
	}
	}

	putchar('\n');

	return (0);
}
