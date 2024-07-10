#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: head node.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;

		free(head);
		head = tmp;
	}
}
