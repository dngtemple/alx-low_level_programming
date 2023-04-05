#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the node
 *
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if ((*head)->next == NULL)
	{
		return (*head);
	}

	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
