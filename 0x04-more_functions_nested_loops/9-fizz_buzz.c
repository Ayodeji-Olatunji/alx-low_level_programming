#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: 0
 */
int main(void)
{
	int n = 1;

	while (n < 101)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("fizz ");
		}
		else if (n % 5 == 0)
		{
			if (n == 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (n % 3 == 0)
		{
			printf("fizz ");
		}
		else
		{
			printf("%d ", n);
		}

		n++;
	}
	printf("\n");

	return (0);
}
