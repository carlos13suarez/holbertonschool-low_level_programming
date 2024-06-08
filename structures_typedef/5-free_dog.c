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
	if (d == NULL)
	{
		printf("0\n");
	}
	free(d->name);
	free(d->owner);
	free(d);
}
