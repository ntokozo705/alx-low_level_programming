#include "main.h"

/**
 * print_number - print as integer
 * @n:
 * integer to be printed
 * Return: 0 always
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = n;
		_putchar('-');
	}
	else
		m = n;
	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');

}
