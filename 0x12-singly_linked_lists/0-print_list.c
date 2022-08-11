#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: points to the first node of the linked list
 * Return: the number of items in the list
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *ptr;

	if (h == NULL)
		printf("[0] (nil)\n");

	ptr = h;
	for (count = 0; ptr != NULL; count++)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}
	return (count);
}
