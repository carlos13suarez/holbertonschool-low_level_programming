#include "lists.h"

/**
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *tmp = *head;

	newNode = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = (int) n;
	newNode->prev = NULL;
	newNode->next = tmp;

	if (tmp != NULL)
		tmp->prev = newNode;

	*head = newNode;

	return (*head);
}
