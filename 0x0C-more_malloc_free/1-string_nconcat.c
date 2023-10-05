#include "main.h"

/**
 * string_nconcat - Concatenates two string
 * @s1: first string
 * @s2: Second string
 * @n: number of bytes
 *
 * Return: string or NULL if empty.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l1, l2;

	i = 0;
	j = 0;
	l1 = 0;
	l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s)
		return (NULL);
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		s[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		s[i++] = s2[j++];
	s[i] = '\0';

	return (s);
}
