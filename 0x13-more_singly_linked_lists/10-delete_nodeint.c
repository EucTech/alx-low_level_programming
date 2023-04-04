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
	listint_t *temp;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		
		if (len == index)
			return (1);
		else if ((*head)->next == NULL)
			return (-1);

		len++;
	}
	return (1);
}
