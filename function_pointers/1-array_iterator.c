#include "function_pointers.h"

/**
 * array_iterator - a function given as parameter on array elements
 * @array: array
 * @size: is the size
 * @action: is a pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
