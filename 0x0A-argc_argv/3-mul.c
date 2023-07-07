#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: contains number of arguments passed
 * @argv: arrays of argument passed
 * Return: 1 if argc is not equals to 2
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);

	return (0);
}
