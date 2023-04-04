#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a list
 * @head: The head
 * @index: This is the list index
 * Return: The value of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int length = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (length == index)
			return (head);
		else if (head->next == NULL)
			return (NULL);

		length++;
		head = head->next;
	}
	return (NULL);
}
