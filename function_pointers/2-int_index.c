#include "function_pointers.h"

/**
 * int_index - Searches for integer in an array using comparison function
 * @array: The array to search through
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function to apply to each element
 *
 * Return: The index of the first element for which the cmp function does
 * not return 0. If no match is found or if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || cmp == NULL || size <= 0)
        return -1;

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return i;
    }

    return -1;
}
