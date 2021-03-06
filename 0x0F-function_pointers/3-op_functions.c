#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: integer a
 * @b: integer b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: integer a
 * @b: integer b
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer a
 * @b: integer b
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a and b
 * @a: integer a
 * @b: integer b
 * Return: the result of division of a and b
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
 * op_mod - modulo (remainder)
 * @a: integer a
 * @b: integer b
 * Return: remainder of division
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
