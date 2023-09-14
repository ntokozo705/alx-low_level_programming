#include "main.h"

/**
 * print_square - print a square then new line
 * @size: size of the square.
 *
 * Return: square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int n, m;

		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
