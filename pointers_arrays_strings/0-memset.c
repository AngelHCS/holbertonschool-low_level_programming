#include "main.h"

/**
 * *_memset - fill memory with constant byte
 * @s: pointer to memory area
 * @n: bytes of memory
 * @b: the constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; n > 0; i++)
		{
			s[i] = b;
		n -= 1;
		}
	return (s);
}
