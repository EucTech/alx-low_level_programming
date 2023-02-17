#include <stdio.h>
/**
 * main - To print alphabet in lowcase expect q and e
 * Return: Always
 */

int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h != 'q' && h != 'e')
		putchar(h);
	}

	putchar('\n');

	return (0);
}
