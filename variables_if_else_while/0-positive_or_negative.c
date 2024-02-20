#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point
 * Return: is zero/is negative/is positive
 */

int main(void)

{
	int n;
/* Printing zero is pretty rare but this is still part of the excercise */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	printf("%d is zero\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is positive\n", n);

	return (0);
}
