#include "main.h"

/**
 * more_numbers -prints 10 times numbers 0..14 with newline
 */

void more_numbers(void)
{
	int c, n
		for (c = 0; c < 10; c++)
		{
			for (n = 0; n < 15; n++)
			{
				if(n >= 10)
					_putchar(n /10 + '0');
				_putchar(n % 10 + '0');
			}
	_putchar('/n');
		}
}
