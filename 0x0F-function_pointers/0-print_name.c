#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function printing a name
 *
 * @name: namme to print
 * @f: pointer to function print name
 *
 * Return: void, prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
