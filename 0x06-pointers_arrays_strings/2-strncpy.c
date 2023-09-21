#include "main.h"

/**
 * _strncpy - the copy string function
 * @dest: First string
 * @src: Second string
 * @n: the integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*j = 0;*/
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
