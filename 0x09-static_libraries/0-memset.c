#include "main.h"
 /**
  * _memset - block of  memory with a particular value
  * @s: initial memory address to be inputed
  * @b: the preferred value
  * @n: the number of bytes that must be altered
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
