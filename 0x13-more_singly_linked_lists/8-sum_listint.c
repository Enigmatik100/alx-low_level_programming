#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of the list
 * @head: head of the list
 *
 * Return: integer that is the sum of all data in linked list;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pt = head;

	while (pt != NULL)
	{
		sum += pt->n;
		pt = pt->next;
	}
	return (sum);
}
