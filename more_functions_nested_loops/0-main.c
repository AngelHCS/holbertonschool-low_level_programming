#include "main.h"
#include <stdio>

/** main - check
 *
 * Return: Always 0 (dont forget uppercase on return for betty)
 */
int main(void)
{
	char c;

	c = 'A';
	printf('%c; %d\n", c, _isupper(c));
	c + 'a';
	printf("%c: %d\n" , c, _isupper(c));
	return (0);
}
