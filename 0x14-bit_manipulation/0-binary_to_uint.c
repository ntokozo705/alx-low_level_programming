#include "main.h"

/**
 * binary_to_uint- Converts binary to unsigned int
 * @b: binary
 *
 * Return: converted value or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conv = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		conv <<= 1;
		if (b[i] == '1')
			conv += 1;
	}
	return (conv);
}
