#include "main.h"

/**
 * pritn_numbers - print from 0-9
 * 
 * Return: all numbers
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
