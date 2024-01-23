#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - doggy details
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: This structure provides a list of details about a dog,
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
