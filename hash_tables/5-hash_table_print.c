#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *currentNode = NULL;

	if (!ht)
		return;

	printf("{");

	while (i < ht->size)
	{
		currentNode = ht->array[i];
		while (currentNode)
		{
			printf("'%s': '%s'", currentNode->key, currentNode->value);
			if (i > 0)
				printf(", ");
			currentNode = currentNode->next;
		}
		i++;
	}

	printf("}\n");
}
