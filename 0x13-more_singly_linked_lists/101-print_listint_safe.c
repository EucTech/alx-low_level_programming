#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - A functon that prints a list
 * @head: The head
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *node_2;
	size_t length = 0, i = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		length++;

		if (head <= head->next)
		{
			node = head->next;

			while (i < length && node < head)
			{
				node_2 = node->next;
				free((void *)node);
				i++;
				node = node_2;
			}
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}
	return (length);
}
