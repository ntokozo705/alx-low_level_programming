#include "main.h"

/**
 * rev_string - a fucntion that reverses the string
 * @s: the string char
 */

void rev_string(char *s)
{
	int  i = 0;
	int j;
	char str = s[0];

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		str = s[j];
		s[j] = s[i];
		s[i] = str;
	}
}
