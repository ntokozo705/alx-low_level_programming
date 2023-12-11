#include "main.h"

/**
 * _isupper -check for uppercase char
 * @c: variable to check
 *
 * Return: 1 if succes 0 if failed
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
