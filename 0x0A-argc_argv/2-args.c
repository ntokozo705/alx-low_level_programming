#include "main.h"

/**
 * main - Print received arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
