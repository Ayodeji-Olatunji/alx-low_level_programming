#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of
 * integers, followed by a newline.
 * @a: the pointer to the elements
 * @n: times to print elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
