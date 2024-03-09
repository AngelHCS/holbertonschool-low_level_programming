#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_calloc - function that allocates memory for array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr
		unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
