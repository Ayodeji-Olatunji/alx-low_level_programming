#include <stdio.h>
/**
 * main - prints all single digit numbers
 *
 * Description: prints all single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}

