#include <math.h>
#include "main.h"
/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result(int)
 */
int power(int base, int exp)
{
	int i, num;

	num = 1;

	for (i = 0; i < exp; ++i)
	{
		num *= base;
	}

	return (num);
}

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
