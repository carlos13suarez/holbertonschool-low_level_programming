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
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to a pointer to a node
 * @str: string we want to duplicate in the len element of a node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
