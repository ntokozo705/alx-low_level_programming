#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 @index
 * @n: the bit given
 * @index: given index
 *
 * Return: 1 if it worked, else -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
