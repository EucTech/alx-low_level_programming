#include <stdio.h>
/**
 * main - To printf a code that print all combinations of two two-digit number
 * Return: Always
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
		if (a == 9 && b == 9)
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');

		putchar(' ');
	}
	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
		if (a == 9 && a == 9)
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');

		putchar(',')
	}
	}
	}

	putchar('\n');

	return (0);
}
