#include "lists.h"

/**
 * get_nodeint_aat_index - returns the node index
 * @head: first node in the list
 * @index: index the node should return
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
