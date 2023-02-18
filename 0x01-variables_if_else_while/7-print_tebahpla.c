#include <stdio.h>
/**
 * main - To print alphabets in reverse order with putchar
 * Return: Always
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
