#include <stdio.h>

/**
 * main- print the alphabet reverse lowercase
 *
 * Return: always 0 (Success)
 */

int main(void)
{
char letter;

for (letter = 'z' ; letter >= 'a' ; letter--)
putchar (letter);

putchar('\n');

return (0);

}
