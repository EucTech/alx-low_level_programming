#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - To print last digit number assign to n (it will be a random num)
 * Return: Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n, last_digit);
	} else if (n == 0)
	{
		printf("%d and is 0\n", n, last_digit);
	} else (n < 6)
	{
		printf("and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
