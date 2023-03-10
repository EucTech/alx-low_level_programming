#include "stdio.h"
#include "stdlib.h"
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: the number of command line arguments
 * @argv: the array containing program in the command line
 * @a
 * Return: Always
 */

int main(int argc, char * argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
