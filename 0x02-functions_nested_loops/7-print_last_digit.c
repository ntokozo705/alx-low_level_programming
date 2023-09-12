#include "main.h"

/**
 * print_last_digit - the print function
 * @a: the variable
 *
 * Return: the last digits
 */
int print_last_digit(int a)
{
	int last_d;

	last_d = a % 10;
	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}
