#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the
 * begining of a list
 * @head: the head
 * @str: the string input
 * Return: new_node or null
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;


	return (new_node);
}
