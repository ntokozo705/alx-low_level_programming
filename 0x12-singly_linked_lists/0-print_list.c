#include "lists.h"
#include <stdio.h>

/**
 * print_list - The function to print all the elements of a list_t.
 * @h: the pointer that hold the linked list
 *
 * Return: 0 if null or str.
 */

size_t print_list(const list_t *h)
{
	int size = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		size++;
	}
	return (size);
}
