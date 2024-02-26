#include "main.h"
/**
 * _strlen - return length of a string
 *@s:value for string
 *Return: string 1-8
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
