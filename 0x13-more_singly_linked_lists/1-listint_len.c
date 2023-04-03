#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * element in a linked list
 * @h: the head
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;

		h = h->next;
	}
	return (length);
}
