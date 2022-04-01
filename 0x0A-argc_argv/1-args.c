#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int args;

	args = argc - 1;

	printf("%d\n", args);

	return (0);
}
