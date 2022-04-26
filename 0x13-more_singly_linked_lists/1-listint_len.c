#include "lists.h"
#include <stddef.h>
/**
 * listint_len - function that return the number of elements in linked list
 * @h: head of the linked list
 *
 * Return: number of element in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *pt = h;

	while (pt != NULL)
	{
		pt = pt->next;
		len++;
	}
	return (len);
}
