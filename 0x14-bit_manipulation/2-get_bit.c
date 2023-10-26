#include "main.h"

/**
 * get_bit - Function that returns value of a bit index
 * @n: int value
 * @index: The index of bit
 *
 * Return: index or -1 if failed.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divis;
	unsigned long int check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divis = 1 << index;
	check = n & divis;
	if (check == divis)
		return (1);
	return (0);
}
