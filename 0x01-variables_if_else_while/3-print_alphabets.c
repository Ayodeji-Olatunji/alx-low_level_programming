#include <stdio.h>
/**
 * main - prints lower and upper case letters
 *
 * Description: prints lowercase and uppercase letters
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}

	putchar(10);

	return (0);
}
