#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct dog pointer
 * @name: name element of type char* in the struct dog
 * @age: age element of type float in the struct dog
 * @owner: owner element of type char* in the struct dog
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		printf("Ok\n");
		exit(1);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
