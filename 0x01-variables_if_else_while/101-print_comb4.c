#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit1, digit2, digit3;

    for (digit1 = 0; digit1 < 8; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 < 9; digit2++)
        {
            for (digit3 = digit2 + 1; digit3 < 10; digit3++)
            {
                putchar('0' + digit1);
                putchar('0' + digit2);
                putchar('0' + digit3);
                if (digit1 != 7 || digit2 != 8 || digit3 != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n'); // Print newline after printing all combinations
    return (0);
}
