#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * hash_table_create - function that creates hash table
 * @size: size of the hash table
 * Return: pointer on hash_table_t element
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst;
	hash_node_t **table;

	hst = malloc(sizeof(hash_table_t));

	if (hst == NULL)
		return (NULL);

	hst->size = size;
	table = malloc(size * sizeof(hash_node_t *));

	if (table == NULL)
		return (NULL);
	hst->array = table;

	return (hst);
}
