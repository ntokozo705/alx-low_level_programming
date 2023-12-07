#include "lists.h"

/**
 * get_dnodeint_at_index - Return nth index of the node
 * @head: pointer to head
 * @index: index of node
 *
 * Return: nth node index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
