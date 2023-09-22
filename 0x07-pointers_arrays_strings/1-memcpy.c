#include "main.h"

/**
 * _memcpy - The function that copies memory
 * @dest: The stored memory
 * @src: The copies memory
 * @n: the length
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
