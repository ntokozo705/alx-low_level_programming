#include "main.h"

/**
 * factorial - The factorial function
 * @n: integer input
 *
 * Return: n factorial.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
