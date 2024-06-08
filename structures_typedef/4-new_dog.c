#include "dog.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: Pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                len++;
                s++;
        }

        return (len);
}

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
	dogname = (char *) malloc(_strlen(name) + 1);
	dogage = (float *) malloc(sizeof(float));
	dogowner = (char *) malloc(_strlen(owner) + 1);
	if (!dogname | !dogage | !dogowner)
	{
		free(dogname, dogage, dogowner, memory);
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
