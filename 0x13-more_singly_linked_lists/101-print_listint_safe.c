#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint_safe - A functon that prints a list
 * @head: The head
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t length = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		length++;

		node = head;
		head = head->next;

		if (node <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (length);
}
