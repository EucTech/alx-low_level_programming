#include <stdio.h>
/**
 * main - To display the sizeof the datas
 * Return: Always
 */
int main(void)
{
	printf("Size of int : %lu byte(s)\n", sizeof(int));
	printf("Size of a long int : %lu byte(s)\n", sizeof(long int));
	printf("Size of long long : %lu byte(s)\n", sizeof(long long));
	printf("Size of char : %lu byte(s)\n", sizeof(char));
	printf("Size of float : %lu byte(s)\n", sizeof(float));
	printf("Size of double : %lu byte(s)\n", sizeof(double));
	return (0);
}
