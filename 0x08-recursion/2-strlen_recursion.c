#include "main.h"
/**
 * _strlen_recursion - function is to return the length of a string
 * @s: Measured string
 *
 * Return: to the length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
