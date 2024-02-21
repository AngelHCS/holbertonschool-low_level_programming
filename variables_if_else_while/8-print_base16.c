#include <stdio.h>

/**
 * main - print numbers base 16 lower
 *
 * Return: always 0 (success)
 */
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
putchar(digit);

for (digit = 'a'; digit <= 'f'; digit++)
putchar(digit);

putchar('\n');
return (0);
}
