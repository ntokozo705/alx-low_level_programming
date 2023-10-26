#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: integers
 *
 * Return: binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printstar = 0;

	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		int bit = (n & mask) ? 1 : 0;

		if (bit == 1)
		{
			printstar = 1;
		}
		if (printstar)
			_putchar('0' + bit);
		mask >>= 1;
	}
}

