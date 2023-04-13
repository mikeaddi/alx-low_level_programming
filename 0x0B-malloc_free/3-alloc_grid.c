#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: to a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **hr;
	int f, g;

	if (width <= 0 || height <= 0)
		return (NULL);

	hr = (int **) malloc(sizeof(int *) * height);

	if (hr == NULL)
		return (NULL);
	for (f = 0; f < height; f++)
	{
		hr[f] = (int *) malloc(sizeof(int) * width);
		if (hr[f] == NULL)
		{
			free(hr);
			for (g = 0; g <= f; g++)
				free(hr[g]);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
	{
		for (g = 0; g < width; g++)
		{
			hr[f][g] = 0;
		}
	}
	return (hr);
}
