#include "lists.h"

/**
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp = *head;

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			break;
		tmp = tmp->next;
	}

	newNode->n = (int) n;
	newNode->prev = tmp;
	newNode->next = NULL;

	if (tmp == NULL)
		*head = newNode;

	if (tmp != NULL)
		tmp->next= newNode;

	return (newNode);
}
