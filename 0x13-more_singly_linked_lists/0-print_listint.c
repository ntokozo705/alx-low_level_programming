#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
