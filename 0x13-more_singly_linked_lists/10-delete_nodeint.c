#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of the list
 * @head: head of the list
 * @index: index to be deleted
 *
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delNode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			tmp = tmp->next;
		delNode = tmp->next;
		tmp->next = tmp->next->next;
		delNode->next = NULL;
		free(delNode);
		return (1);
	}
	return (-1);
}
