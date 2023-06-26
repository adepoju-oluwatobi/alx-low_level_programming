#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first character
 * @b: second character
 * return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
