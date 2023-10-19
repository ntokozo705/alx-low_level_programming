#include "lists.h"

/**
 * add_node_end - A func that adds a new node at the end of list_t
 * @head: double pointer ot list_t
 * @str: the string to be added
 *
 * Return: Address if success Null if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (temp->next)
		temp = temp->next;
	temp-> next = add;
	return (add);
}
