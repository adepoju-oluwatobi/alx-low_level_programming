#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -function name
 * @a: first parameter
 * @size: second parameter
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (j = 0; j < 8; j++)
	{
		sum1 += a[(size + 1) * j];
		sum2 += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
