#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - a program that returns the sum of all the data od a list
 * @head: The head
 * Return: It will return the sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
