#include <stdio.h>

/**
 * main- the putchar func for letters
 *
 * Return: 0 always
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
