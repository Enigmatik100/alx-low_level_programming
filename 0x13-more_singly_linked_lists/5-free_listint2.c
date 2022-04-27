#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees listint_t list
 * @head: head of linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
	*head = NULL;
	head = NULL;
}
