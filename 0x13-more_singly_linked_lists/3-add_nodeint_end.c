#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds new node at the end of a list
 * @head: head of the list
 * @n: number to be added
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pt, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
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
