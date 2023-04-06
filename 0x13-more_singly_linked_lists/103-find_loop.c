#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop - This function finds the loop of a linked list
 * @head: A pointer to the head
 * Return: return address of the node or null if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1 = head;
	listint_t *node2 = head;

	if (head == NULL)
		return (NULL);

	while (node1 && node2 && node2->next)
	{
		node1 = node1->next;
		node2 = node2->next->next;

		if (node1 == node2)
		{

			while (node1 != node2)
			{
				node1 = node1->next;
				node2 = node2->next;
			}
			return (node1);
		}
	}
	return (NULL);
}
