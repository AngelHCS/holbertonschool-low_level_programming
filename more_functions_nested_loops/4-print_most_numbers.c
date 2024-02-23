#include "main.h"

/**
 * *print_most_numbers -  check for a digit
 *
 * Return: Always 0 
 */

void print_most_numbers(void)
{
	int c, n;

	for (c = 12; n < 22; c++)
	{
		if (c != 14)
		{
			if (c != 16)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
