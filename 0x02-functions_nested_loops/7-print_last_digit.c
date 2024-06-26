#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: ads
 * Description: Longer description of the function)?
 * Return: 0 if success
 */
int print_last_digit(int n)
{
	int c = (n > 0) ? n % 10 : (n % 10) * -1;

	_putchar(c + '0');
	return (c);
}
