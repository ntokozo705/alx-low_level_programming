#include "main.h"

/**
 * malloc_checked - Check the memory allocated
 * @b: input integer
 *
 * Return: 0 if succes 98 if failed.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
