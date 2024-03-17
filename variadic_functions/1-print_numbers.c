#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with newline
 * @n: num
 * @seperator: the seperator between 2 numbers
 * Return: 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
