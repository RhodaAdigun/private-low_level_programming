#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name of the person to print
 * @f: points to a function that prints a name
 *    as it is or in uppercase
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return (NULL);
	(*f)(name);
}
