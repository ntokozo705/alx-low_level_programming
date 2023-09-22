#include "main.h"

/**
 * set_string - Set value of a pointer to a char
 * @s: pointer
 * @to: point to s
 *
 * Return: s.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
