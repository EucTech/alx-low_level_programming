#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: the head
 * @n: integer
 * Return: new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int new_num;
	listint_t *last;
	listint_t *new_node;

	/*allocating memory to new_node*/
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_num = n;
	new_node->n = new_num;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}
