#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes followed by a newline
 * @n: number of backslashes to print
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');  /* Print just a newline if n is 0 or less */
}
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
