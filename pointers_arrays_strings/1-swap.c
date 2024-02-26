#include "main.h"

/**
 * swap_int - as the name suggests it's to swap integers
 * @a: first int
 * @b: second int
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
