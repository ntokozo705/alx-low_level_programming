#include "main.h"

/**
 * _isdigit - check if number are 0-9.
 * @c: the check variable char
 *
 * Return: 1 success 0 fail.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
