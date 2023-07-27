#include <stdio.h>
/**
 * print_first - a function that prints some strings to stdout
 * Return: success
 */
void first(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
