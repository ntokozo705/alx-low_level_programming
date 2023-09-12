#include "main.h"

/**
 * _islower - the starting point
 * The lowercase checker
 *@c: the character variable to check
 * Return: 0-if lowercase 1-if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
