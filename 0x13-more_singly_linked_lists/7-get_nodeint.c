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
	listint_t *current, *next;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = head;
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
