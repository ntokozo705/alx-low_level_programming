#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: size of allocation
 * @new_size: new size of memory
 *
 * Return: void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pt = malloc(new_size);
	if (!pt)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pt[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pt[i] = old_ptr[i];
	}
	free(ptr);
	return (pt);
}
