#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_loop - funtion that find a loop and return the start point of the loop
 * @head: head of the list
 *
 * Return: the start point of the loop
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);
	slow = head->next;
	fast = head->next->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow != fast)
		return (NULL);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
/**
 * print_listint_safe - function that prints a listint_t
 * @head: head of the list
 *
 * Return: return number of node in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	int found = 0;
	listint_t *pt, *loopNode;

	if (head == NULL)
		return (0);

	pt = (listint_t *) head;
	loopNode = find_loop((listint_t *)head);
	while (pt != NULL)
	{
		if (loopNode == pt)
		{
			if (found == 1)
			{
				printf("->[%p] %d\n", (void *)pt, pt->n);
				return (size);
			}
			else
				found++;
		}
		printf("[%p] %d\n", (void *)pt, pt->n);
		size++;
		pt = pt->next;
	}
	return (size);
}
