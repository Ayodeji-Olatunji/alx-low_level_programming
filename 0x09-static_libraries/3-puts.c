#include "main.h"
/**
 * _puts - prints a string, followed by a newline
 * @s: the string
 *
 * Return: void
 */
void _puts(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}

	_putchar('\n');
}
