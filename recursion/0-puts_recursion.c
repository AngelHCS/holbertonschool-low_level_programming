#include "main.h"
/**
 * _puts_recursion - prints string with newline
 *@s: a
 *Return: 0
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
