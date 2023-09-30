#include <unistd.h>

/**
 * _putchar- prints the char to c
 *
 * Return: 1 on success
 * error, -1 return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
