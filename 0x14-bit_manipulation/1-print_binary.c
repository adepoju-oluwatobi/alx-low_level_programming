#include "main.h"
/**
 * print_binary - function that prints the binary representatio
 * @n: decimal number to convert
 * Return: Nothing
 */
unsigned long int _exp(unsigned int base, unsigned int exp);

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char stat;

	stat = 0;
	divisor = _exp(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			stat = 1;
			_putchar('1');
		}
		else if (stat == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
/**
 * _exp - function that calc the exponential value of binary
 * @base: base number
 * @exp: exponent
 * Return: number
 */
unsigned long int _exp(unsigned int base, unsigned int exp)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= exp; i++)
		number *= base;
	return (number);
}
