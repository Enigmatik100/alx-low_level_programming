#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: the hash table
 * Return: anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, display_comma = 0;

	printf("{");
	for (i = 0; ht != NULL && i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (display_comma == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			display_comma = 1;
		}
	}
	printf("}\n");
}
