#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - a functionthat deletes the head node
 * @head: The head
 * Return: Delete head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/*checking if the head is empty*/
	if (head == NULL || *head == NULL)
	{
		return (0);
	}

		temp = *head;
		*head = (*head)->next;

		/*saves the value of the remove node in n*/
		n = temp->n;
		free(temp);

	return (n);
}
