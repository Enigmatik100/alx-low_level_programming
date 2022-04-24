#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function that returns the length of the string
 * @s: string
 *
 * Return: integer
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the singly list
 * @str: string to be added at the end of the list
 *
 * Return: address of the new element of NULL if it failled
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pt, *newNode;

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

	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	pt = *head;
	while (pt->next != NULL)
		pt = pt->next;

	pt->next = newNode;
	return (newNode);
}
