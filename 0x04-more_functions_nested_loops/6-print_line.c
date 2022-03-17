#include "main.h"
/**
 * print_line - prints a line of _ n long
 * @n: length of count
 *
 * Return: void
 */
void print_line(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
