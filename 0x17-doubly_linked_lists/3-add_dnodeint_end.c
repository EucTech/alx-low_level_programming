#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - a function that adds a node at the end of a list
 * @head: The head
 * @n: The data
 * Return: node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *currt, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	currt = *head;
	while (currt->next != NULL)
		currt = currt->next;

	currt->next = new_node;
	new_node->prev = currt;

	return (new_node);
}
