#include "main.h"
/**
 *
 *
 *
 */
void more_numbers(void)
{
	int c, i = 0;

	while (i < 10)
	{
		for (c = '0'; c <= '1'; c++)
		{
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}

