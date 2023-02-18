#include <stdio.h>
/**
 * main - To print combination of number
 * Return: Always
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
