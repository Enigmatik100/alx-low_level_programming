#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that free a linked list
 * @head: head of the linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = head;
	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
}
