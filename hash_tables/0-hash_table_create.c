#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array (hash table)
 * 
 * Return: a pointer to the newly created hash table.
 * Returns NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable = NULL;

	HashTable = malloc(sizeof(hash_table_t));
	HashTable->size = size;
	HashTable->array = (hash_node_t **) malloc(size * sizeof(unsigned long int));

	return (HashTable);
}
