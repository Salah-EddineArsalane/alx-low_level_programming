#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number string
 * @n2: second number string
 * @r: buffer to store the result
 * @size_r: size of buffer r
 *
 * Return: pointer to the result string r, or 0 if result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
int i, j;
char *tmp;

while (n1[len1])
len1++;
while (n2[len2])
len2++;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);

tmp = r + size_r - 1;
*tmp = '\0';
len1--;
len2--;

for (i = len1, j = len2; i >= 0 || j >= 0; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
*--tmp = sum % 10 + '0';
}

if (carry)
{
if (size_r == len1 + len2 + 3)
return (0);
*--tmp = carry + '0';
}

return (tmp);
}
