#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 *
 * @h: head node.
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = (dlistint_t *) h;
	size_t count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
