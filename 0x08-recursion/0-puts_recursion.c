#include "main.h"
/**
 * _puts_recursion - main function puts
 * @s: input
 * Return: ALways 0 upon success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		 putchar ('\n');
}
