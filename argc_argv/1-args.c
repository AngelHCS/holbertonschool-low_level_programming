#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *@argc: argument count to be passed
 *@argv: Pointer that tells where the arguments will go
 *Return: 0 success
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
