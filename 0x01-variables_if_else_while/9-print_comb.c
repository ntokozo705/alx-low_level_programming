#include <stdio.h>

/**
 * main- print all possible combination
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <10; n++)
	{
		if (n == 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
