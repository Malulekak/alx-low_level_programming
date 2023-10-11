#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name- this functions prints a name
 * @name: string to print.
 * @f: function pointer that will recieve a string.
 *
 * Return: this is a void function no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
