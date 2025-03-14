#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: pointer to array or NULL if size = 0 or memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
return (NULL);
}

array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
