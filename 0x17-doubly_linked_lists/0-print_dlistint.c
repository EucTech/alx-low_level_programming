#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t list
 * @h: a pointer
 * Return: length
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
