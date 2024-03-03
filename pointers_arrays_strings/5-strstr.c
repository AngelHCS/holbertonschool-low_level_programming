#include "main.h"
/**
 * _strstr - locates substring
 *@needle: pointer 1 char
 *@haystack: pointer 2 char
 * Return: s (substring?)
 */

char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
			;
		if (!(needle[count]))
			return (haystack);
	}
	return (0);
}
