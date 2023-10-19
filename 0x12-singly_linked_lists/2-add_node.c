#include "lists.h"

/**
 * add_node - Func that adds new node at the start of a list_t list
 * @head: Double pointer to the list_t
 * @str: new string to be added
 *
 * Return: address or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen - string length
 * @s: pointer for character
 *
 * Return: int.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
