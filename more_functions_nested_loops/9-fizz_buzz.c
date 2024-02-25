#include "main.h"
#include <stdio.h>

/**
 * main - prints the number 1-100 with newline
 * multiples of 3 Fizz no number
 * multiples of 5 Buzz and if both do FizzBuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d",  i);
		}
	}
	printf("\n");

	return (0);
}
