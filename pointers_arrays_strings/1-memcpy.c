#include "main.h"

/**
 * *_memcpy - copy memory area
 *@n: the bytes
 *@src: memory area to pull from
 *@dest: destination area to copy bytes to.
 *Return: the copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 i++)
	{
		dest[i] = src [i];
		n -= 1;
	}
	return (dest);
}
