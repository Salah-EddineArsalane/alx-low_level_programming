#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 * Return: The integer converted from string @s.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int num = 0;
int started = 0;

while (s[i] != '\0')
{
if (s[i] == '-' || s[i] == '+')
{
if (started)
break;

if (s[i] == '-')
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
num = num *10 + (s[i] - '0');
}
else if (started)
{
break;
}

i++;
}

return (num *sign);
}
