#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @d: pointer to a structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(98);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
