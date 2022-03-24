#include "main.h"
/**
 * reverse_array - reverses the contents of an array of integers.
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int half = n / 2;
	int left, right, i;

	n = n - 1;
	for (i = 0; i < half; i++)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;
	}
}
