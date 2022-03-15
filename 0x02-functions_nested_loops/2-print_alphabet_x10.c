#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x times
 *
 * Description: function that prints lowercase alphabets 10x
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;

		_putchar('\n');
	}
}
