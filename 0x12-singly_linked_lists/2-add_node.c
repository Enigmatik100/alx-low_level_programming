#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function that returns the length of a string
 * @s: string
 *
 * Return: unsigned int
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node - function that adds new node at the begining of a list_h list.
 * @head: pointer on head
 * @str: string to be add
 *
 * Return: pointer on a node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t *));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	newNode->len = _strlen(str);
	*head = newNode;

	return (newNode);
}
