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
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	return (0);
	
}