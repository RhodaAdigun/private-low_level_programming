#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -function that executes a function
 * given as a parameter on each element of an array
 * @array: array to be iterated through
 * @size: size of the array
 * @action: a pointer to a function that iterates
 *        through array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
