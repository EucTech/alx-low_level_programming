#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - free a node
 * @head: head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
