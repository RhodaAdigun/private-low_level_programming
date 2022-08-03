#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - loops though an array and compares integers
 * @array: the array to loop through
 * @size: the size of the array to loop through
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which
 *        the cmp function does not return 0
 * returns -1 if no element matches or size <=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int ptr;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		ptr = (*cmp)(array[index]);
		if (ptr != 0)
			return (index);
	}
	return (-1);
}
