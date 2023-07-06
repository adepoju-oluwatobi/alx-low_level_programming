#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: numeric variable
 * Return: -1 if `n` is lower than 0
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
