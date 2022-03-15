#include "_putchar.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char input[6] = "Hello";
	int n = 0;

	for (n = 0; n < 6; n++)
	{
		_putchar(input[n]);
	}
	_putchar('\n');

	return (0);
}
