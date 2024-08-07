#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hashtable to look into
 * @key: the key looking for
 *
 * Return: value associated with the element, or NULL if key couln't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *currentNode = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	currentNode = ht->array[index]->value;

	while (currentNode)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			return (currentNode->value);
		}
		currentNode = currentNode->next;
	}

	return (NULL);
}
