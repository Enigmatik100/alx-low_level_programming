#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: the head of the linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}
