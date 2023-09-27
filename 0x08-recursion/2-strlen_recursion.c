#include "main.h"

/**
 * _strlen_recursion - Function that brings length
 * @s: string
 *
 * Return: len Always.
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if(*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
