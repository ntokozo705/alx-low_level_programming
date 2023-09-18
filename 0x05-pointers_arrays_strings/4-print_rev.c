#include "main.h"

/**
 * print_rev - print the string in reverse
 * @s: the string storage
 * The print string in reverse
 */

void print_rev(char *s)
{
	int size, i;

	size = 0;
	while (*s != '\0')
	{
		size++;
		/* _putchar(*s++); */
		i++;
	}
	s--;
	for (i = size; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
