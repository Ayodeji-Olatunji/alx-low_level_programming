#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determines if number is positive or negative
 *
 * Description: prints a random number n everytime the program
 * is executed.
 *
 * Returns: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*  your codes goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
