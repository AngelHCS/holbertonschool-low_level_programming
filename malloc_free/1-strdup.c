#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Duplicate a string
*@str: duplicated string
 *Return: the string
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + i);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0'; /** i need to check if '\0' is the same as null*/
	return (s);
}
