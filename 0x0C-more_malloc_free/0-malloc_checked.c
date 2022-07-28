#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory to allocate
 * Return: a pointer to the allocated memory
 * if malloc fails, program terminates normally with 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
