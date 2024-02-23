#include "main.h"

/**
 * print_line _ draws a straight line in terminal
 * @n: number of times the char should print
 * Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
