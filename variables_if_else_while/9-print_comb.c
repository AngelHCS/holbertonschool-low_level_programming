#include <istdio.h>

/**
 * main - print all combos of single digit numbers
 *
 * Return: always 0 (succes)
 */
{
int number;

for (number = 0; number <= 9; number++)
{
putchar (number + '0');
if (number < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
