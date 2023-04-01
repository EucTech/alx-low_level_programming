#include <stdio.h>

/**
 * print - a function that prints words
 * Return: 0
 */
void print(void) __attribute__ ((constructor));

void print(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
