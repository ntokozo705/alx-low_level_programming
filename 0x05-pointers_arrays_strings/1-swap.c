#include "main.h"

/**
 * swap_int - check the code
 * The function that swipes two values
 *
 * @a: the first value
 * @b: the second value
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}

