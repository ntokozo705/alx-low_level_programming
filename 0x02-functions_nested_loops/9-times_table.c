#include "main.h"

/**
 * times_table - the time table function
 *
 * Desscription: print the table nine times
 *
 * return: 0 success
 */

void times_table(void)
{
	int column, row, tens, ones, product;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;
			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
