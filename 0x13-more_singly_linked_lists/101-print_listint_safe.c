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
	const listint_t *read;
	size_t length = 0;

	/*checks if head is NULL then terminate the program*/
	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		length++;

		read = head->next;

		if (read >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = read;
	}
	return (length);
}
