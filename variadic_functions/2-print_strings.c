#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by newline
 * @seperator: seperator for strings
 * @n: number of paramaters
 * Return: 0
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
		va_end(ap);
}
