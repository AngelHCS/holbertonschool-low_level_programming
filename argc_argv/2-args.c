#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *@argc: counts argument
 *@argv: argument values
 *Return: 0 success
 */

int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
