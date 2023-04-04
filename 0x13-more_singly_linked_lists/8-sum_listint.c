#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: head of the node
 *
 * Return: 0
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
