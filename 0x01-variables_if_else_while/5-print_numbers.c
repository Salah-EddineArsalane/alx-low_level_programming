#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;

while (digit < 10)
{
putchar(digit + '0');
digit++;
}

putchar('\n');
return (0);
}
