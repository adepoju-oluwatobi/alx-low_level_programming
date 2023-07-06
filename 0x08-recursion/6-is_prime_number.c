#include "main.h"
/**
 * is_prime_number - find the prime numbers
 * @n: integer variable
 * Return: 1 if prime number and 0 if not.
 */
int is_prime_number(int n)
{
	int x;

	if (n % n == 0 || n % 1 == 0)
	{
		x = 1;
		is_prime_number(x);
		return (x);
	}
	else
	{
		x = 0;
		is_prime_number(x);
		return (x);
	}
}
