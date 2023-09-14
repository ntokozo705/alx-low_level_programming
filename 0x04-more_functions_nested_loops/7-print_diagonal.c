#include "main.h"

/**
 * print_diagonal - diagonal print function
 *@n: The n times
 *
 * Return: 0 always.
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int l, k;

		for (k = 0; k < n; k++)
		{
			for (l = 0; l < n; l++)
			{
				if (l == k)
					_putchar('\\');
				else if (l < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
