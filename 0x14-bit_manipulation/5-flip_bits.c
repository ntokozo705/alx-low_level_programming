#include "main.h"

/**
 * flip_bits - return flipped bit from one number
 * @n: bits
 * @m: index
 *
 * Return: Number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int current;
	unsigned long int excu = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = excu >> i;
		if (current & 1)
			counter++;
	}
	return (counter);
}
