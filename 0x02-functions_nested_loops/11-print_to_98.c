#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - Entry point
 * @n: asdfj
 * Description: Longer description of the function)?
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 97)
		{
			printf("%d, ", n++);
		}
	}
	else if (n > 98)
	{
		while (n >= 99)
		{
			printf("%d, ", n--);
		}
	}
	printf("%d\n", 98);
}
