#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - a function that delets a node at index
 * @head: The head
 * @index: the index
 * Return: node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *hold;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		hold = *head;
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(hold);
		return (1);
	}

	curr = *head;
	while (index > 0 && curr != NULL)
	{
		curr = curr->next;
		index--;
	}
	if (curr == NULL)
		return (-1);
	hold = curr;
	curr->prev->next = curr->next;

	if (!curr->next)
		curr->next->prev = curr->prev;

	free(hold);
	return (1);
}
