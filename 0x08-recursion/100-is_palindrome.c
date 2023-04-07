#include "main.h"

int check_pal(char *s, int h, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function to find if a string is a palindrome
 * @s: reversing string
 *
 * Return: to 1 if it is a palindrome if not 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - length of string returns
 * @s: lenght of string calculated
 *
 * Return:length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursion for palindrome
 * @s: string check
 * @h: iterator
 * @len : string lenght
 *
 * Return: to 1 if it is a palindrome if not 0
 */
int check_pal(char *s, int h, int len)
{
	if (*(s + h) != *(s + len - 1))
		return (0);
	if (h >= len)
		return (1);
	return (check_pal(s, h + 1, len - 1));
}
