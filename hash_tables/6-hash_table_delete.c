#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to delete
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *currentNode, *tmp;

	if (!ht)
		return;

	while (i < ht->size)
	{
		currentNode = ht->array[i];
		while (currentNode != NULL)
		{
			tmp = currentNode;
			currentNode = currentNode->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
