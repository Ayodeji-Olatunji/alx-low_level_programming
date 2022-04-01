#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_number - checks if the argument is a number
 * @s: the parameter to check
 * Return: 1 if successful and 0 otherwise
 *
 */
int is_number(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: 0 if success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int is_num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			is_num = is_number(argv[i]);
			if (is_num == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
