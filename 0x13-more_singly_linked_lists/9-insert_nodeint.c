#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts node at given position
 * @head: head of the singled list
 * @idx: index of the list where the new node should be inserted
 * @n: value to be added
 *
 * Return: pointer on the new element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *tmp, *newNode;
	unsigned int i = 0, len = 0;

	tmp = *head;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	if (idx > len)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL && idx == 0)
	{
		newNode->next = NULL;
		head = &newNode;
		return (newNode);
	}

	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}
	newNode->next = current->next;
	current->next = newNode;
	return (newNode);
}
