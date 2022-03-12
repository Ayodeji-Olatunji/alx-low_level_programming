#include <stdio.h>
/**
 * main - prints pair of double digit numbers
 *
 * Description: prints pair of double digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, n;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			n = j + 1;
			k = i;
			while (k < 58)
			{
				while (n < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(n);
					if (i < 57 || j < 56 || k < 57 || n < 57)
					{
						putchar(44);
						putchar(32);
					}
					n++;
				}
				n = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}

