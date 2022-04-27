#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head of a linked list
 * @head: head of the linked list
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	val = tmp->n;
	free(tmp);
	return (val);
}
