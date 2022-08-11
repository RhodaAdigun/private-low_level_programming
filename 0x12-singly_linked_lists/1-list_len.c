#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: pointer to linked list
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *ptr;

	ptr = h;
	for (count = 0; ptr != NULL; count++)
		ptr = ptr->next;
	return (count);
}
