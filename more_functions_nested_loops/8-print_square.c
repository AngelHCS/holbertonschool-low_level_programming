#include "main.h"
/**
 * print_square - the comment goes here
 * @size: the size of the int
 * Return: always 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar ('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
