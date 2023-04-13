#include <stdlib.h>
#include "main.h"
/**
 * count words - function to count number of words in a string
 * @s: number of strings to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (b);
}
/**
 * strtow - function that splits a string into words
 * @str: strings splited
 *
 * Return: to array of strings upon success or NULL upon ERROR
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int l, h = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(size(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (l = 0; l <= len; l++)
	{
		if (str[l] == ' ' || str[l] == '\0')
		{
			if (a)
			{
				end = l;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[h] = tmp - a;
				h++;
				a = 0;
			}

		}
		else if (a++ = 0)
			start = l;
	}

	matrix[h] = NULL;

	return (matrix);
}
