#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
        int n, m, o;

        for (n = 48; n <= 56; n++)
        {
                for (m = 49; m <= 57; m++)
                {
			for (o = 50; o <= 58; o++)
			{
                        if (o > m && m  > n)
                        {
                                putchar(n);
                                putchar(m);
				putchar(o);
                                if (n != 56 || m != 57)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
			}
                }
        }
        putchar('\n');
        return (0);
}
