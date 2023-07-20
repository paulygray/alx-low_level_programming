#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operation
 *
 * @a: first int param
 * @b: second int param
 *
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 *
 * @a: first int param
 * @b: second int param
 *
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 *
 * @a: first int param
 * @b: second int param
 *
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 *
 * @a: first int param
 * @b: second int param
 *
 * Return: Result
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
 * op_mod - modulo operation
 *
 * @a: first int param
 * @b: second int param
 *
 * Return: Result
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
