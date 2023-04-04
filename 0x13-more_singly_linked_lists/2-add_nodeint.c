#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of the node
 * @n: number of elements
 *
 * Return:the address of the new element
 *        NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
