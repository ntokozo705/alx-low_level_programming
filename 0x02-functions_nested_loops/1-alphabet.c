#include "main.h"

/**
 * main- the function that print alphabets
 *
 * Return: 0 always
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
