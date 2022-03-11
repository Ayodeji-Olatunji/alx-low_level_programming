#include <stdio.h>
/**
 * main - prints all possible combination of
 * single digit numbers
 *
 * Description: prints all combination of single
 * digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);
}
