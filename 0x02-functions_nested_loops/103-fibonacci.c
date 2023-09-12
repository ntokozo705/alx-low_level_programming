#include <stdio.h>

/**
 * main - The main printing function
 * less than 4000....
 * return: 0 Always
 */

int main(void)
{
	int i = 0;
	long int j = 1, k = 2, sum;

	sum = k;

	while (k+j < 4000000)
	{
		k +=j;
		if (k % 2 == 0)
		{
			sum += k;
			j = k -j;
			++i;
		}
	}
	printf("%ld", sum);
	return (0);
}
