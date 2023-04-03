#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - a function that prints all element in a list
 * @h: head
 * Return: length
 */

size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++
	}
	return (length);
}
