#include "stdio.h"
#include "stdlib.h"
/**
 * main - a program that prints arguments it recevies
 * @argc: is the number of command line arguments
 * @argv: is the array containing in th command line
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	
	return (0);
}
