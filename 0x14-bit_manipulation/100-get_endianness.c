#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
