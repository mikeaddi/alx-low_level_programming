#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of chars
 *
 * Return: the converted number, or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci_val = 0;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[l] - '0');
	}

	return (deci_val);
}
