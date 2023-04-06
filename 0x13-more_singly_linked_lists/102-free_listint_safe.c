#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_listint_safe - This is a function that frees a linked list
 * @h: This is a pointer to head pointer
 * Return: to return the size of this list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *tem;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		tem = *h;
		*h = (*h)->next;
		free(tem);

		size++;
	}
	*h = NULL;
	return (size);
}
