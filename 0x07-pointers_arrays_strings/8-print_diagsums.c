#include "main.h"

/**
 * print_diagsums - Prints two diagonals of a square matrix
 * @a: matrix
 * @size: size of the matrix
 *
 * Return: a.
 */

void print_diagsums(int *a, int size)
{
	int s1, s2, z;

	s1 = 0;
	s2 = 0;

	for (z = 0; z <size; z++)
	{
		s1 += a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		s2 += a[z * size + (size - z -1)];
	}
}
