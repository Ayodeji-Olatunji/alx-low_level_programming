#include "main.h"
/**
 * _memset - function that fills memory
 * with a constant byte.
 * @s: string
 * @b: the value to replace with
 * @n: number of times
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (*s);
}
