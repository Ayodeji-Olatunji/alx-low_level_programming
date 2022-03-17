#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9
 * followed by a newline.
 *
 * Return: void
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
