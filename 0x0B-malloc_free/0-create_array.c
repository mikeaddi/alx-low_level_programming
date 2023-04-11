#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array -  creates an array of chars
 * @size: size of array
 * @c: assigned  char
 * main - creates an array of chars, and initializes it
 * Return: points to array, if not NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int l;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (l = 0; l < size; l++)
		str[l] = c;
	return (str);
}
