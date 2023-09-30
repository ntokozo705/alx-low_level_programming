#include "main.h"

/**
 * main - Print number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 Always.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
