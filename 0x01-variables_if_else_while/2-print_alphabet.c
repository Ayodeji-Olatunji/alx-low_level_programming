#include <stdio.h>
/**
 * main - prints lowercase alphabets
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return (0);
}
