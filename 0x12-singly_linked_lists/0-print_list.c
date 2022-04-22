#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer on node
 *
 * Return: size_t size of list elements
 */
size_t print_list(const list_t *h)
{
	const list_t *pt = h;
	size_t len = 0;

	while (pt != NULL)
	{
		if (pt->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", pt->len, pt->str);
		len++;
		pt = pt->next;
	}
	return (len);
}
