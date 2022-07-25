#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*create_array - creates an array of chars, and initializes it with a specific char
 *Return : NULL if size = 0, return : a pointer to the array, or NULL if it fails
 *@no: counter for size
 *
 ar *create_array(unsigned int size, char c)
{
  int no;
  if (size == 0)

    char *i = (char*) malloc(size * sizeof(char));

  if (i == NULL)
    {
      return(NULL);
    }
  else
    {
      for (no = 0; no < size; no++)
     
