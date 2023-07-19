#include <stdio.h>
#include <stdlib.h>
#include "function_pointer.h"
/**
 * print_name - a function that prints a name
 * @name: name to print
 * @f: pointer to funtion print_name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
