#include <math.h>
#include <stdio.h>

/**
 * main - prints largest prime number
 * creates a new line
 *
 * Return: 0 always
 */

int main(void)
{
	long int max;
	long int i;
	long int n;

	n = 612852475143;
	max = -1;
	while (n % 2 == 0)
	{
		n /= 2;
		max = 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);

	return (0);
}
