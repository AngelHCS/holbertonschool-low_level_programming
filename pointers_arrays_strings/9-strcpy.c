#include "main.h"
/**
 * _strcpy - copies string pointed to by src to buffer by dest
 * @dest: pointer in which we copy string
 * @src: string to copy
 * Return: back to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
