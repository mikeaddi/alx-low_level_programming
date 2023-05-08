#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: first number to be flipped
 * @m: second number to be flipped
 *
 * Return: to number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int l, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		current = exclusive >> l;
		if (current & 1)
			count++;
	}

	return (count);
}
