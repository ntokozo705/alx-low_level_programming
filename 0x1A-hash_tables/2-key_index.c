#include "hash_tables.h"

/**
 * key_index - Get the index
 * @key: key index
 * @size: size of array ot the table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
