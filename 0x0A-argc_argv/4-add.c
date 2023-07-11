#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: number of argument passed
 * @argv: array of argument passed
 * Return: 0 if no number passed, 1 if number have symbol
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
