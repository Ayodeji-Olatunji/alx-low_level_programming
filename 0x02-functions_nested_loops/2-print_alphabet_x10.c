#include "main.h"
/**
 * main - Function that prints lowercase alphabets 10x
 *
 *Description: function that prints lowercase alphabets 10x
 *
 *Return: Always 0 (success)
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

		-putchar('\n');
	}
}
