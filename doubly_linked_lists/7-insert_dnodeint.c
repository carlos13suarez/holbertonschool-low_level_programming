#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: head node.
 * @idx:  index of the list where the new node should be added.
 * Index starts at 0.
 * @n: n data for the new node
 *
 * Returns: the address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx,
 * does not add the new node and returns NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp = *h;
	dlistint_t *tmp_forward = tmp->next;
	int idx_cp = (int) idx;

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			break;
		if (idx_cp > tmp->n & idx_cp < tmp_forward->n)
			break;
		tmp = tmp->next;
		tmp_forward = tmp_forward->next;

	}

	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp_forward;

	tmp->next = newNode;
	tmp_forward->prev = newNode;

	return (newNode);
}
