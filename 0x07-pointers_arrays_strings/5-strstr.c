#include "main.h"

/**
 * _strstr - Functon to locate a substring
 * @haystack: string
 * @needle: checker
 *
 * Return: pointer if success or null if failed.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0';haystack++)
	{
		char *h = haystack;
		char *q = needle;

		while (*h == *q && *q != '\0')
		{
			h++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
