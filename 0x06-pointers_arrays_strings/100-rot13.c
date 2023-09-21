#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function
 *
 * @s: String poiner
 *
 * Return: String function
 */

char *rot13(char *s)
{
	int f, t;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (f = 0; s[f] != '\0'; f++)
	{
		for (t = 0; t < 52; t++)
		{
			if (s[f] == d1[t])
			{
				s[f] = d2[t];
				break;
			}
		}
	}
	return (s);
}
