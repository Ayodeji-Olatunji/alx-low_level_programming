#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers starting with 1 & 2
 *
 * Return: 0
 */
int main(void)
{
	long int sum, first, second, count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 98)
	{
		sum = first + second;
		printf("%ld, ", sum);
		first = second;
		second = sum;
		count++;
	}

	sum = first + second;
	printf("%ld\n", sum);

	return (0);
}
