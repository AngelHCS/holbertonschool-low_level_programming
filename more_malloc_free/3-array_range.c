#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *array_range - make memory for array
 * @min: minimum
 * @max: maximum
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
