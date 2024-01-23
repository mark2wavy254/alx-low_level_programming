#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct
 * @d: pointer to the struct
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(98);
	}

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);

	if (d->name == NULL && d->age == 0)
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	}
}
