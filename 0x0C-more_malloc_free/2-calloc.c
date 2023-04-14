#include <stdlib.h>
#include "main.h"

/**
 * _memset - function that allocates memory for an array
 * @s: memory allocated to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory allocated
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}

	return (s);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array with the number of elements
 * @size: size of elements
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
