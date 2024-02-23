#include "main.h"

/**
 * *print_most_numbers -  check for a digit
 *
 * Return: Always 0 (successful)
 */
void print_most_numbers(void)
{
	int c, n;

	for (c = 10; n < 20; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
