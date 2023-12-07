#include "lists.h"

/**
 * free_dlistint - free dlistint_t list
 * @head: pointer head
 *
 * Return: null
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
