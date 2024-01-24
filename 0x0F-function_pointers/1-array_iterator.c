#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array.
 * @array: array containing the function
 * @size: size of the array
 * @action: function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
