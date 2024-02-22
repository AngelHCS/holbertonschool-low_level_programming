#include "main.h"

/**
* print_alphabet - prints a..z lowercase
* Return: is 0 (success)
*/

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
