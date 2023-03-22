#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This is a function that prints a name
 * @name: name of the person
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
