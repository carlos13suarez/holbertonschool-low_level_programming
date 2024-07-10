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

	for (i = 0; i < index; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		printf("(nil)");

	return (tmp);
}
