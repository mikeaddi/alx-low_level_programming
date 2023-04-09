#include "main.h"

/**
 * _memcpy - a funtion that duplicates the area's memory
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: the number of bytes
 *
 * Return: to copied memory with changed byte(n)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int l = n;

	for (; k < l; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
