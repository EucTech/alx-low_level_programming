#include "stdio.h"
/**
  * main - a program that prints its name
  * @argc: the number of command line arguments
  * @argv: the array containing the program in CMD line
  * Return: always
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

