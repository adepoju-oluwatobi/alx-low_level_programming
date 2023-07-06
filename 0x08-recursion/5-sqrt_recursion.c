#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a n
 * @n: numeric variable
 * Return: -1 if `n` do not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int sqr_root;

	if (n % 2 != 0)
	{
		return (-1);
	}
	else
	{
		sqr_root = sqrt(n);
		_sqrt_recursion(sqr_root);
		return (sqr_root);
	}
}
