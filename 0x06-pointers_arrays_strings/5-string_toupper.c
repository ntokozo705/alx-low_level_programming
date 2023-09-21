#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: string
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] -= 32;
		k++;
	}
	return (str);
}

