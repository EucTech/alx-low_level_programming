#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that insrts a new node at
 * a given position
 * @head: The head
 * @idx: The index
 * @n: The value
 * Return: return the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *position = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/*checks if index is 0, i.e it cannot insert node*/
	if (idx == 0)
	{
		return (NULL);
	}
	else if (idx == 1)
	{
		new_node->next = *head;
		*head = new_node;
		i++;
	}
	else
	{
	/*uses loop to decrement by 1 in each iteration until idx becomes 0*/
	while (--idx > 0)
	{
		position = position->next;
	}
	new_node->next = position->next;
	position->next = new_node;
	i++;
	}

	return (new_node);
}
