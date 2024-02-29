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
	unsigned int k;

		for (k = 0; k < n; k++)
		{
			s[k] = b;
		n -= 1;
		}
	return (s);
}
