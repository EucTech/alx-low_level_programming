#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes node at index
 * @head: This is a pointer to pointer head
 * @index: The index
 * Return: 1 if succeeded or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *delete;
	unsigned int len = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		while (len < index - 1)
		{
			temp = temp->next;
			len++;

			if (temp == NULL || temp->next == NULL)
				return (-1);
		}
	}

	delete = temp->next;
	temp->next = temp->next->next;
	delete->next = NULL;
	free(delete);

	return (1);
}
