#include <stdio.h>
/**
 * first - a function that prints some strings to stdout
 * Return: nothing
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
