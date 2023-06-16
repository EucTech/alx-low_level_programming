#include "lists.h"
#include <stdio.h>
#include  <stdlib.h>
/**
 * get_dnodeint_at_index - Add a node at indez
 * @head: the head
 * @index: Index
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currt = head;
	unsigned int len = 0;

	while (currt != NULL)
	{
		if (len == index)
			return (currt);

		 currt = currt->next;
		 len++;
	}
	return (NULL);
}
