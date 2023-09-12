#include "main.h"

/**
 * prnt_sign - prints the sign of an int
 * @n: The variable to hold numbers
 *
 * Return: 1 for positive 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ( n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
}
