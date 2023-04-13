#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: to a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int *hr;
	int f, g;

	if (width <= 0 || height <= 0)
		return (NULL);

	hr = malloc(sizeof(int *) * height);

	if (hr == NULL)
		return (NULL);

	for (f = 0; f < height; f++)
	{
		hr[f] = malloc(sizeof(int) * width);

		if (hr[f] = NULL)
		{
			for (; f >= 0; f--)
				free(hr[f]);

			free(hr);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
	{
		for (g = 0; g < width; g++)
			hr[f][g] = 0;
	}

	return(hr);
}
