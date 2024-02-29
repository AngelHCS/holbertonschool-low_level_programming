#include "main.h"
/**
 *string_toupper - change lowercase to uppercase
 *@s: the string to change to uppercase
 *Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
