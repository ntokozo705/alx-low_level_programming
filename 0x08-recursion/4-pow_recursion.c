#include "main.h"

/**
 * _pow_recursion - The x^y function
 * @x: base x
 * @y: exponent y
 *
 * Return: result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
