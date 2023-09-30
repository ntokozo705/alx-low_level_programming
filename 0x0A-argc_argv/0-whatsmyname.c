#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: #of arguments
 * @argv: array of arguments
 *
 * Return: 0 Always.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
