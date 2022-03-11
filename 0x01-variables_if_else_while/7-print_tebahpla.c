#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse order z - a
 *
 * Description: print lowercase letters in reverse
 *
 * Return: 0
 */
int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}

	putchar(10);

	return (0);
}
