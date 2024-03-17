#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its paramaters
 * @n: count
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	va_list args;
	unsigned int i = 0;

	if (n == 0)
	return (0);
	va_start(args, n);
	for (; i < n; i++)
	result += va_arg(args, int);

	va_end(args);
	return (result);
}
