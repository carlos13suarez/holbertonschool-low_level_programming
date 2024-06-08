#ifndef _0_OBJECT_LIKE_MACRO_H_
#define _0_OBJECT_LIKE_MACRO_H_

/* Libraries */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Macros */

/* Structures */
/**
 * struct dog - elements of a dog object
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
