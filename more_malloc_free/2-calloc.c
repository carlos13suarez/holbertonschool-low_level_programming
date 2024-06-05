#include "main.h"

/**
 * calloc - allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory.
 *
 * @nmemb: the number of elements to allocate.
 * @size: size of each of the elements to be allocated.
 *
 * Return: If nmemb or size is 0, then it returns NULL.
 * Else, the memory will be returned.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *array_memory = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_memory = (void *) malloc(nmemb * size);

	if (!array_memory)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array_memory[i] = 0;

	return (array_memory);
}
