#include <stdio.h>
/**
 * main - To write a code that will print 3 combination of digits
 * Return: Always
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
	for (b = a + 1; b < 9; b++)
	{
	for (c = b + 1; c < 10; c++)
	{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		putchar((c % 10) + '0');

		if (a == 8 && b == 9 && c == 10)
		continue;

		putchar(',');
		putchar(' ');
	}
	}
	}

	putchar('\n');

	return (0);
}
