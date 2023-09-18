#include "main.h"

/**
 * _strcpy - The copy function
 * @dest: the destination pointer
 * @src: The string point
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
