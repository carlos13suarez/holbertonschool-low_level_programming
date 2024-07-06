#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: pointer to the linked list that will be freed.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
