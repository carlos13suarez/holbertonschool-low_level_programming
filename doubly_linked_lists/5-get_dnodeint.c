#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: head node.
 * @index: is the index of the node, starting from 0
 *
 * Return: the address of the nth element, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	if (index >= UINT_MAX)
	{
		printf("(nil)");
		return (NULL);
	}

	for (i = 0; i < index; i++)
		tmp = tmp->next;

	return (tmp);
}
