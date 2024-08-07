include "hash_tables.h"

/**
 * delete_next_node - deletes next node
 * 
 * @node: node to delete
 *
 * Return: Nothing
 */
void delete_next_node(hash_node_t *node)
{
	if (node)
		delete_next_node(node->next);
	free(node);
	return;
}


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
	hash_node_t *currentNode = NULL;

	if (!ht)
		return;

	while (i < ht->size)
	{
		currentNode = ht->array[i];
		if (currentNode->next)
		{
			delete_next_node(currentNode);
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
