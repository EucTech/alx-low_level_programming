#include "stdio.h"
#include "stdlib.h"
/**
 * main - a program that multiplies two numbers
 * @argc: is the number of command line arguments
 * @argv: an array containing the program CMD line Arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
