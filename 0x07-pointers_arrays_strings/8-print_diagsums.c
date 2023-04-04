#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - main entry point
 * @a: input
 * @size: input
 * Return: Always 0 upon succcess
 */

void print_diagsums(int *a, int size)
{
	int sum5, sum6, y;

	sum5 = 0;
	sum6 = 0;

	for (y = 0; y < size; y++)
	{
		sum5 = sum5 + a[y *  size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum6 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum5, sum6);
}
