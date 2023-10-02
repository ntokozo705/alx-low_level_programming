#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated memory
 * @str: string
 *
 * Return: 1 allocation 0 NULL.
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	j = 0;
	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (; str[j]; j++)
		a[j] = str[j];

	return (a);
}
