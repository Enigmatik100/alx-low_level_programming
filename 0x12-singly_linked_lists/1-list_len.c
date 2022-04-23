#include "lists.h"
/**
 * list_len - function that returns the number of element
 * @h: pointer on list_h
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *pt = h;

	if (pt == NULL)
		return (count);
	while (pt != NULL)
	{
		count++;
		pt = pt->next;
	}
	return (count);
}
