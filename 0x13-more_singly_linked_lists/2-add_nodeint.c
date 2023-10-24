#include "lists.h"

/**
 * add_nodeint - adds a new node at the begginning
 * @head: Pointer to the first node of the list
 * @n: New data to add
 *
 * Return: pointer to a new node, NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
