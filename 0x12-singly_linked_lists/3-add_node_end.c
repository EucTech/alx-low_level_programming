#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the of a list
 * @head: The head
 * @str: The string
 * Return: last_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;
	list_t *last;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
