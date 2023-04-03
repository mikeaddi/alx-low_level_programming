#include "main.h"
 /**
  * _memset -  assign a particular value to a memory block
  * @s: initial memory address to be inputed
  * @b:the preferred value
  * @n: number of bytes that must be altered
  *
  * Return: modified array with updated n byte value
  */
char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}
