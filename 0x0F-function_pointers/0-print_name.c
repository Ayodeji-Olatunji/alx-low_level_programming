#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer to the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
