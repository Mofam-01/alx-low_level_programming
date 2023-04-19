#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
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
 * op_mod - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result
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
