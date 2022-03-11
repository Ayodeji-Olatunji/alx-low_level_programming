#include <stdio.h>
/**
 * main - print lowercase alphabet excluding q and e
 *
 * Description: print lowercase alphabet excluding q and e
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
			putchar(a)
		}
		a++;
	}

	putchar(10);

	return (0);
}
