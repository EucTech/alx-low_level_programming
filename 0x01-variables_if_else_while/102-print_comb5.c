#include <stdio.h>
/**
 * main - To printf a code that print all combinations of two two-digit number
 * Return: Always
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
	for (b = a + 1; b < 100; b++)
	{
		putchar((a / 10) + '0');
		putchar((b % 10) + '0');

		putchar(' ');

		putchar((a / 10) + '0');
		putchar((b % 10) + '0');

		if (a == 98 && b == 99)
		continue;

		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
