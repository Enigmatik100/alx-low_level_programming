#include "hash_tables.h"
/**
 * create_node - function to test for collision
 * @key: the new key
 * @value: the value
 * Return: pointer on hash_node_t
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (NULL);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
		return (NULL);

	newNode->value = strdup(value);
	if (newNode->value == NULL)
		return (NULL);

	return (newNode);
}
/**
 * hash_table_set - Function that add an element to the hash table
 * @ht: pointer on the hash table
 * @key: pointer on the key
 * @value: pointer on the value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *findNode, *newNode;
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	findNode = (ht->array)[index];
	newNode = create_node(key, value);
	if (newNode == NULL)
		return (0);
	/* if this col of the hash table is empty */
	if (findNode == NULL)
	{
		(ht->array)[index] = newNode;
		return (1);
	}

	newNode->next = findNode;
	(ht->array)[index] = newNode;

	return (1);
}
