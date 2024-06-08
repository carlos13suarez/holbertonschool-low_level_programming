#include "dog.h"

/**
 * new_dog - creates a new dog.
 *
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *memory = NULL;
	char *dogname = NULL, *dogowner = NULL;
	float *dogage = NULL;

	memory = (dog_t *) malloc(sizeof(dog_t));
	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}
	dogname = (char *) malloc(strlen(name));
	dogage = (float *) malloc(sizeof(float));
	dogowner = (char *) malloc(strlen(owner));
	if (!dogname | !dogage | !dogowner)
	{
		free(dogowner);
		return (NULL);
	}
	dogname = name;
	dogage = &age;
	dogowner = owner;

	memory->name = dogname;
	memory->age = *dogage;
	memory->owner = dogowner;

	return (*(&memory));
}
