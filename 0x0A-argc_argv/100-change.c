#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int n, m, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < 5 && n >= 0; m++)
	{
		while (n >= coins[m])
		{
			result++;
			n -= coins[m];
		}
	}
	printf("%d\n", result);
	return (0);
}

