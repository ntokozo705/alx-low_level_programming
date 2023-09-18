#include "main.h"

/**
 * puts2 - The string charactor printer first char
 * @str: the pointer
 *
 * The function prints every character
 */

void puts2(char *str)
{
	int size, n, m;
	char *arr = str;

	size = 0;
	n = 0;

	while (arr[size] != '\0')
	{
		size++;
	}
	n = size;
	for (m = 0; m < n; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(arr[m]);
		}
	}
	_putchar('\n');
}
