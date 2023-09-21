#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: the first int
 * @n: length
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}

