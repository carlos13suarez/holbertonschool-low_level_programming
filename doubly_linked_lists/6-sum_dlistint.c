#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: head node.
 *
 * Return: the number of nodes, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = (dlistint_t *) head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
