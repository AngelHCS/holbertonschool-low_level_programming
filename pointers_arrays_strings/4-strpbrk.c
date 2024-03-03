#include "main.h"
/**
 * _strpbrk - search a string for a set of bytes
 * @s: char pointer
 *@accept: char pointer2
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int counter;

	for (; *s != '\0'; s++)
	{
		for (counter = 0; accept[counter] != '\0'; counter++)
		{

			if (*s == accept[counter])
				return (s);
		}
	}
	return (0);
}
