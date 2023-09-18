#include "main.h"

/**
 * puts_half - prints half string
 * @str: yjr string input
 */

void puts_half(char *str)
{
	int len, n, i;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
