#include "main.h"

/**
 * cap_string - capitalizes all words
 * @str: the string
 *
 * Return: void.
 */

char *cap_string(char *str)
{
	int idx;

	while (str[idx])
	{
		while (!(str[idx] >= 'a' && str[idx] <= 'z'))
			idx++;
		if (str[idx - 1] == ' ' ||
		str[idx - 1] == '\t' ||
		str[idx - 1] == '\n' ||
		str[idx - 1] == ',' ||
		str[idx - 1] == ';' ||
		str[idx - 1] == '.' ||
		str[idx - 1] == '!' ||
		str[idx - 1] == '?' ||
		str[idx - 1] == '"' ||
		str[idx - 1] == '(' ||
		str[idx - 1] == ')' ||
		str[idx - 1] == '{' ||
		str[idx - 1] == '}' ||
		idx == 0)
			str[idx] -= 32;
		idx++;
	}
	return (str);
}
