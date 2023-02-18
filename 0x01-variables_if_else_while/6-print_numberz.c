#include <stdio.h>
/**
 * main - To print signle numbers of base 10 using putchar
 * Return: Always
 */

int main(void)
{
	int s_num;

	for (s_num = 0; s_num < 10; s_num++)
	{
		putchar(s_num + '0');
	}

	putchar('\n');

	return (0);
}
