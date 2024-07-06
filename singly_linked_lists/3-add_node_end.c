#include "lists.h"

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: Pointer of type char that points to a string.
 *
 * Description: Function that returns the number of bytes of a string pointed
 * by pointer *s.
 *
 * Return: Number of bytes of a string.
 */
int _strlen(const char *s)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to a pointer to a node
 * @str: string we want to duplicate in the len element of a node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *linked_list = *head;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (linked_list == NULL)
		*head = new_node;
	else
	{
		while (linked_list->next != NULL)
			linked_list = linked_list->next;
		linked_list->next = new_node;
	}

	return (new_node);
}
