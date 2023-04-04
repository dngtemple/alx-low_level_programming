#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes the node at index index of
 *                             a listint_t linked list
 * @index: index of the node
 * @head: pointer to the heade of the node
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *temp;
	listint_t *next;

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
