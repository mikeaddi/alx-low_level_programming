#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *sss;
	int l, j = 0;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
		l++;

	sss = malloc(sizeof(char) * (l + 1));

	if (sss == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		sss[j] = str[j];

	return (sss);
}
