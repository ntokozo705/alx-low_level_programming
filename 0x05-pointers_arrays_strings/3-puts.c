#include "main.h"

/**
 * _puts - The function that prints string
 * @str: string
 * Print the string passed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
