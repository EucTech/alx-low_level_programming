#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - sum a node
 * @head: head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *head2 = head;

	while (head2 != NULL)
	{
		sum += head2->n;
		head2 = head2->next;
	}
	return (sum);
}
