#include "main.h"

/**
 * print_alphabet - the function that print alphabets
 *
 * Return: 0 always
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
