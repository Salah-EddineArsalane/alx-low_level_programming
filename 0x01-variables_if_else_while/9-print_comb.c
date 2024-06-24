#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++)
    {
        putchar('0' + digit);
        if (digit != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n'); // Print newline after printing all combinations
    return (0);
}
