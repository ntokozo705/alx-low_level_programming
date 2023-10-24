#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}
