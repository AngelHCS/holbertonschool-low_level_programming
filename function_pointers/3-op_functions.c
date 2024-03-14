#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add - operation_addition
 *@a: first num
 *@b: second num
 *Return: addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operation_subtraction
 * @a:first num
 * @b:second num
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - operation_div
 * @a:first num
 * @b:second num
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}

	return (a / b);
}

/**
*op_mul - operation multiplication
*@a: first num
*@b: second num
*Return: multiplcation result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - operation_modulo
 * @a: first num
 * @b: second num
 * Return: modulo result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
