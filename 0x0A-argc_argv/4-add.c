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
	int i, sum;

	for (i = 1; i < argc; i++)
	{
		if (argc == '\0')
		{
			printf("0\n");
			return (0);
		}
		else if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d", sum);

	return (0);
}
