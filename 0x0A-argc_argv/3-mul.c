#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: String to be converted
 *
 * Return:string to Int
 */

int _atoi(char *s)
{
	int i, j, n, len, k, d;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	k = 0;
	d = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && k == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			n = n * 10 + d;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two digits
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success 1 error.
 */

int main(int argc, char *argv[])
{
	int product, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	product = n1 * n2;

	printf("%d\n", product);

	return (0);
}
