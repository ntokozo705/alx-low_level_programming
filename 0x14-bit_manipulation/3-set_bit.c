#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: the bits given
 * @index: the bit index
 *
 * Return: 1 if worked, -1 if failed.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;
	
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
