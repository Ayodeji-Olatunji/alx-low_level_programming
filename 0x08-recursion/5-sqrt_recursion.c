#include "main.h"
/**
 * check_num - checks integer as candidate for square root
 * @square: square integer
 * @x: integer
 * Return: integer
 */
int check_num(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (check_num(square, x - 1));
	else if (x < square / x)
		return (check_num(square, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a
 * number.
 * @n: the number
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_num(n, i));
}
