#include <stdio.h>
#include "main.h"
/**
 *main- print name
 *argc: count arguments
 *argv: argument vector (i thought it was arg value this whole time)
 *Return: 0
 */

int main(int argc, char ** argv);
{
	(void) argc;
	printf("%s\n", argv[0]);

	return(0);
}
