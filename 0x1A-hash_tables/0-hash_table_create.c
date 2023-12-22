#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: The size of the table
 *
 * Return: error give NULL. Otherwise, return pointer to new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hta;
	unsigned long int i;

	hta = malloc(sizeof(hash_table_t));
	if (hta == NULL)
		return (NULL);

	hta->size = size;
	hta->array = malloc(sizeof(hash_node_t *) * size);
	if (hta->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hta->array[i] = NULL;

	return (hta);
}			
