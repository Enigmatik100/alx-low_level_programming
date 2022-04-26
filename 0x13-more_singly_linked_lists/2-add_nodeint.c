#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the begining of a linked list
 * @head: head of the list
 * @n: value to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
