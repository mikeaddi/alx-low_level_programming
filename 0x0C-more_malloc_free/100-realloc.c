#include <stdlib.h>
#include "main.h"

/**
 * _realloc - unction that reallocates a memory block using malloc and free
 * @ptr: pointer to the previous memory by malloc
 * @old_size: size of allocated memory(old)
 * @new_size: size of memory block(new)
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int l;

	if (new_size == old_size)

		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);

		return (NULL);
	}

	if (!ptr)

		return (malloc(new_size));

	ptr1 = malloc(new_size);

	if (!ptr1)

		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (l = 0; l < new_size; l++)
			ptr1[l] = old_ptr[l];
	}

	if (new_size > old_size)
	{
		for (l = 0; l < old_size; l++)
			ptr1[l] = old_ptr[l];
	}
	free(ptr);
	return (ptr1);
}
