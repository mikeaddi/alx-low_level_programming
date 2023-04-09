#include "main.h"
/**
 * _strpbrk - point of entry
 * @s: input
 * @accept: input
 * Return: Always 0 upon sucess
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		return (s);
	s++;	}
	}
return ('\0');
}
