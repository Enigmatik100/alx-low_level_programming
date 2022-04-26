#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - functiont that prints all the elements of a listint_t list
 * @h: header of the list
 *
 * Return: size_t (Number of nodes)
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *pt = h;

	if (pt == NULL)
		return (0);

	while (pt != NULL)
	{
		printf("%d\n", pt->n);
		pt = pt->next;
		size++;
	}
	return (size);
}
