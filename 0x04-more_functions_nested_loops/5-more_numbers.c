#include "main.h"
#include <stdio.h>

/**
 * more_numbers - the function for numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int n ,m;

	for ( n = 0; n <= 10; n++)
	{
		for ( m = 0; m <=14; m++)
		{

			if (m >= 10)
			{
				_putchar('1');
				_putchar(m % 10 + '0');
			}
			else
				_putchar(m % 10 + '0');
		}
		printf("\n");
	}
}
