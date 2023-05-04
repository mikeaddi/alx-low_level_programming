#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: points to the binary of a number
 *
 * Return: to the converted binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int new;
	int l, count = 0;

	for (l = 63; l >= 0; l--)
	{
		new = n >> l;

		if (new & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
