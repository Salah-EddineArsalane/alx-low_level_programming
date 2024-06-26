#include "main.h"



/**
 * print_sign - Entry point
 * @n: asdf
 * Description: Longer description of the function)?
 * Return: 0 if success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
