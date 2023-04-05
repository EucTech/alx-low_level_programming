#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a list
 * @head: The head
 * Return: A pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last, *tem;

	if (head == NULL || *head == NULL)
		return (NULL);

	last = NULL;

	while (*head != NULL)
	{
		tem = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = tem;
	}
	*head = last;

	return (*head);
}
