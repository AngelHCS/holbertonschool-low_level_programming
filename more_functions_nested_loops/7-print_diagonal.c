#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the chararacter should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int c, a;

		for (a = 0; a < n; c++)
		{
			for (c = 0; a < n; a++)
			{
			if (a == c)
				_putchar('\\');
			else if (a < c)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
