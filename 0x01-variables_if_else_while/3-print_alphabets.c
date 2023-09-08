#include <stdio.h>

/**
 * main- The putchar fucntion
 *
 * Return: 0
 */

int main(void)
{
	char l,L;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (L = 'A'; L <= 'Z'; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
