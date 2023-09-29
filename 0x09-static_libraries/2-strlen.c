#include "main.h"

/**
 * _strlen - The length of the string
 * @s: the pointer string variable
 * To calculate the length string
 *
 * Return: size.
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
