#include "main.h"

/**
 * create_array - creates an array amd initialize it
 * @size: size of the array
 * @c: string
 *
 * Return: NULL if size=0, and 1 if not.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

