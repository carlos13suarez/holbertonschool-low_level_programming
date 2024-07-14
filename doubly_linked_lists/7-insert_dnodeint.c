#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: head node.
 * @idx:  index of the list where the new node should be added.
 * @n: n data for the new node
 *
 * Return: the address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx,
 * does not add the new node and returns NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while ((tmp != NULL) && (i < idx - 1))
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;

	tmp->next = newNode;

	if (tmp->next != NULL)
		tmp->next->prev = newNode;

	return (newNode);
}
