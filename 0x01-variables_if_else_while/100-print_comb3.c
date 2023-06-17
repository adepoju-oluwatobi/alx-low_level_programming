#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
        int n, m;

        for (n = 1; n <= 10; n++)
        {
                for (m = 2; m <= 11; m++)
                {
                        if (m > n)
                        {
                                putchar(n);
                                putchar(m);
                                if (n != 10 || m != 11)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
