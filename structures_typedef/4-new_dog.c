#include "dog.h"

/**
 * _strcpy - copies string from one char array to another.
 *
 * @dest: array of char where the string will be pasted.
 * @src: string to be copied.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}


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
		free(dogname);
		free(dogage);
		free(dogowner);
		free(memory);
		return (NULL);
	}
	strcpy(dogname, name);
	strcpy(dogowner, owner);
	dogage = &age;

	memory->name = dogname;
	memory->age = *dogage;
	memory->owner = dogowner;

	return (*(&memory));
}
