#include "main.h"
/**
 * _strncpy - conca strings with size of second string
 * @dest: string with conca
 * @src: string to be conca
 * @n: size of second string
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
