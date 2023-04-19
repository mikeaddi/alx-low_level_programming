#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action:  pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
		return;

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
