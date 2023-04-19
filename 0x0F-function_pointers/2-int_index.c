#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - unction that searches for an integer.
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]))
			return (l);
	}
	return (-1);
}
