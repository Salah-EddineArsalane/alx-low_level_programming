#include <stdlib.h>
#include "main.h"

/**
 * print_error - Prints an error message and exits with status 98.
 */
void print_error(void)
{
char error[] = "Error\n";
char *ptr = error;

while (*ptr)
{
_putchar(*ptr);
ptr++;
}
exit(98);
}

/**
 * is_digit - Checks if a string is composed only of digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise.
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * convert_to_int - Converts a string of digits to unsigned long long integer.
 * @str: The string to be converted.
 *
 * Return: The converted unsigned long long integer.
 */
unsigned long long convert_to_int(char *str)
{
unsigned long long num = 0;

while (*str)
{
num = num * 10 + (*str - '0');
str++;
}
return (num);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: The first number string.
 * @num2: The second number string.
 */
void multiply(char *num1, char *num2)
{
unsigned long long n1 = convert_to_int(num1);
unsigned long long n2 = convert_to_int(num2);
unsigned long long result = n1 * n2;
char buffer[21];
int i = 20;

buffer[i--] = '\0';
if (result == 0)
{
buffer[i] = '0';
}
else
{
while (result > 0)
{
buffer[i--] = (result % 10) + '0';
result /= 10;
}
}
while (buffer[++i])
{
_putchar(buffer[i]);
}
_putchar('\n');
}

/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, or exits with status 98 on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
print_error();
}
multiply(argv[1], argv[2]);
return (0);
}
