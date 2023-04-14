#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a contains a non-digit char
 * @s: evaluated strings
 *
 * Return: 0 if a non-digit is found, if not 1
 */
int is_digit(char *s)
{
	int l = 0;

	while (s[l])
	{
		if (s[l] < '0' || s[l] > '9')
			return (0);

		l++;
	}

	return (1);
}

/**
 * _srlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: length of string
 *
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");

	exit(98);
}

/**
 * main - multiples two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 upon success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;

	int len1, len2, len, l, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);

	for (l = 0; l <= len1 + len2; l++)
		result[l] = 0;
	
	for (len1 = len1 - 1; len1 >= 0; len1--)

	{
		digit1 = s1[len1] - '0';
		carry = 0;

		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)

		{
			digit2 = s2[len2] - '0';

			carry += result[len1 + len2 + 1] + (digit1 * digit2);

			result[len1 + len2 + 1] = carry % 10;

			carry /= 10;
		}
		
		if (carry > 0)

			result[len1 + len2 + 1] += carry;
	}

	for (l = 0; l < len - 1; l++)
	{
		if (result[l])
			a = 1;
		if (a)
			_putchar(result[l] + '0');
	}

	if (!a)
		_putchar('0');

	_putchar('\n');
	free(result);
	
	return (0);
}
