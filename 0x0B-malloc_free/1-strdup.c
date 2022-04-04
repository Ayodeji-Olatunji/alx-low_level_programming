#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str.
 * @str: the given string
 *
 * Return: NULL if str is NULL or if insufficient memory was available
 * otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i, size;
	char *array;

	if (str == NULL)
	{
		return (NULLL);
	}

	size = 0;
	while (*(str + size) != '\0')
	{
		size++;
	}

	array = malloc(size * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';


	return (array);
}
