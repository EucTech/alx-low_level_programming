#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: the h
 * @idx: The index
 * @n: the data
 * Return: node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int j = 0;
	dlistint_t *curr, *node2;

	if (h == NULL)
		return (NULL);

	node2 = malloc(sizeof(dlistint_t));
	if (node2 == NULL)
		return (NULL);

	curr = *h;
	node2->n = n;
	node2->prev = NULL;
	node2->next = NULL;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = node2;
		else
		{
			node2->next = *h;
			curr->prev = node2;
			*h = node2;
		}
		return (node2);
	}
	for (; j < (idx - 1); j++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	node2->n = n;
	node2->next = curr->next;
	node2->prev = curr;
	if (curr->next != NULL)
		curr->next->prev = node2;
	curr->next = node2;
	return (node2);
}
