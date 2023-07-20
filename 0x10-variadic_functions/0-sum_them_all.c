#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: first args in function
 * Return: 0 if n is '0'
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Init va_list to store arg var */
	va_list params;
	unsigned int x;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(params, n);
	/* init loop */
	for (x = 0; x < n; x++)
	{
		sum += va_arg(params, int);
	}
	va_end(params);
	return (sum);
}
