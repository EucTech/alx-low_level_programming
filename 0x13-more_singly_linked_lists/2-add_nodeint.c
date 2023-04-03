#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - a funtion that adds a new node at the beginning
 * @head: The head
 * @n: integer
 * Return: new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int new_num;

	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_num = n;
	new_node->n = new_num;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
