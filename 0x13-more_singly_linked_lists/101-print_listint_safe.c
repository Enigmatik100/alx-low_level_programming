#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints a listint_t
 * @head: head of the list
 *
 * Return: return number of node in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		size++;
		printf("[%p] %d\n", (void *)head, head->n);
		
		if (diff > 0)
			head = head->next;
		else
		{
			printf("->[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (size);
}
