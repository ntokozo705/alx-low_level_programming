#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * mai:- the number checker
 *
 * Return: 0 always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive",n);
	}
	else if (n < 0)
	{
		printf(n, " is negative");
	}
	else if (n == 0)
	{
		printf("n is zero");
	}
	return (0);
}
