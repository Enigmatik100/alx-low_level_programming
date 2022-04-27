#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head of the list
 * @index: index of element to be returned
 *
 * Return: node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *next, *pt;
	unsigned int i, len = 0;

	if (head == NULL)
		return (NULL);

	pt = head;
	while (pt->next != NULL)
	{
		len++;
		pt = pt->next;
	}

	if (len == 1)
		return (head);

	current = head;
	i = 1;
	while (current->next != NULL)
	{
		if (i == index)
		{
			next = current->next;
			current = next->next;
			return (next);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
