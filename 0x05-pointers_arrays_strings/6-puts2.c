#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
