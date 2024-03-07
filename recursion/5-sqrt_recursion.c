#include "main.h"
/**
 * sqrt2 - finds natural square root
 *@a: int1
 *@b: int2
*Return: sqrt
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 *_sqrt_recursion - recursion of square root
 *@n: the number
 *Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
