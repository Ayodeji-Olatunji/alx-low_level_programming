#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */
char *leet(char *s)
{
	int i, j;
	char arr[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
