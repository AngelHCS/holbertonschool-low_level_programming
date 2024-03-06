#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: argument value
 *Return: succesful 0 floof
 */

int main(int argc, char **argv)
{
	int n, floof;

	floof = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		floof = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]); /*atoi resets/blanks the argv*/
		printf("%i\n", n);
	}
	return (floof);
}
