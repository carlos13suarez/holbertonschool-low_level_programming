#include "dog.h"

/**
 * free_dog - frees dogs.
 *
 * @d: memory to be freed.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	free(d);
}
