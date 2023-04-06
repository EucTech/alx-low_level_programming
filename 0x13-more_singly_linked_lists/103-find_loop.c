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
		node2 = node2->next->next; /*move pointer to two node*/

		/*if node1 and node2 is equal return the address of*/
		/* the node the loop starts*/
		if (node1 == node2)
		{
			return (node1);
		}
		head = node1;
	}
	return (NULL);
}
