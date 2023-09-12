#include "main.h"

/**
 * _isalpha - The function that checks the char
 * @c: The charactor holder
 *
 * Return: 1 for all.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);

}
