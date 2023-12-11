#include "main.h"

/**
 * _memset - Memory fill function
 * @s: starting address of memor to be filled
 * @b: desired adress
 * @n: integer to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

