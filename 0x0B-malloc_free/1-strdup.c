#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 *  which is a duplicate of the string str
 *  Return: NULL if str = NULL or  if insufficient memory was available
 *  returns a pointer to the duplicated string on success
 *@str: string to duplicate
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len];)
	     len++
	ptr = (char *) malloc(len * sizeof(char) + 1);
	
	while (str[len] != '\0')
	{
		ptr[len] = str[len];
		if (ptr == 0)
			return (NULL);
		else
			return(ptr);
	}
	free(ptr);
}
