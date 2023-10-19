#include "lists.h"

/**
 * list_len - Function that return number in a linked list_t list
 * @h: Pointer to the list
 *
 * Return: 0 if Null or number.
 */

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		d++;
		h = h->next;
	}
	return (d);
}
