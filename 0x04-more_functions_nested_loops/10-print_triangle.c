#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: length of sides minus hypotenuse
 *
 * Return: void
 */
void print_triangle(int size)
{
	int line = 0;
	int space;
	int hash;

	if (size > 0)
	{
		while (line < size)
		{
			for (space = size - 1; space > line; space--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < line + 1; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
