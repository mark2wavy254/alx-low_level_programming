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

/**
 * new_dog - prints the details of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to a structure containing details of the dog
 * On error, return NULL.
 */

struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *nd = malloc(sizeof(struct dog));

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->name = name;
	nd->age = age;
	nd->owner = owner;

	return (nd);
}

#endif
