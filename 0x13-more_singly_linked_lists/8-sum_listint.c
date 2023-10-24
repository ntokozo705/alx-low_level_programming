#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the data in list
 * @head: First node
 *
 * Return: resulting sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
