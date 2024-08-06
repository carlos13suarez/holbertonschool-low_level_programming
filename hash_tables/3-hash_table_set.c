#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t newNode;

	if (!key)
		return (0);

	newNode = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
		newNode->next = ht->array[index];

	ht->array[index] = newNode;

	return (1);
}