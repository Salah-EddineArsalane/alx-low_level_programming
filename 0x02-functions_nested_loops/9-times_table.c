#include "main.h"

/**
 * times_table - Entry point
 * Description: Longer description of the function)?
 */
void times_table(void)
{
	int i, j, num, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			/* spaces printing */
			if (j != 0)
			{
				x = (num < 10) ? 2 : 1;
				while (x)
				{
					_putchar(' ');
					x--;
				}
			}
			if (num < 10)
			{
				_putchar(num + '0');
			}
			else
			{
				if (num / 10 != 0)
				{
				_putchar(num / 10 + '0');
				}
				_putchar(num % 10 + '0');
			}
				if (j != 9)
				{
					_putchar(',');
				}
		}
		_putchar('\n');
	}
}
