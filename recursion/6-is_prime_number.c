#include "main.h"
/**
 *prime2 -return 1 if int is prime otherwise 0
 *@a: int 1
 *@b: int 2
 *Return: return prime
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 *is_prime_number - same deal here
 *@n: int 3
 *Return: prime num
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
