#include "main.h"
/**
 *_strncat - conca strings, define line of second string
 *@dest: string with conca
 *@src: string with conca
 *@n: size of 2nd string
 *Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = 0;
	len2 = 0;

	while (*(dest + len1) != '\0')
		len1++;

	while (*(src + len2) != '\0' && len1 < 97 && len2 < n)
	{
		*(dest + len1) = *(src + len2);
		len1++;
		len2++;
	}
	*(dest + len1) = '\0';
	return (dest);
}
