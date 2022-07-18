#include "my_header.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s : location to fill memory
 * @b : is the constant byte
 * @n : fills the n bytes of memory area
 * Return: returns the pointer to the location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
