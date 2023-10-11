#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - this functions iterates an array
 * @array: the array to iterate
 * @size: the size of the array.
 * @action: this a function pointer.
 *
 * Return: this is a void function no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
        size_t i;

    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
