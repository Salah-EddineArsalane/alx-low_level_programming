#include <stdio.h>

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
        putchar(digit + '0');  // Convert digit to character and print
        digit++;               // Move to the next digit
    }

    putchar('\n'); // Print newline after printing all digits
    return (0);
}
