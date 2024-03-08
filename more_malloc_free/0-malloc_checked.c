#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - allocate memory
 * @b: unsigned int
 * Return: return
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
