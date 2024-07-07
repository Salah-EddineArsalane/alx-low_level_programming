#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *str)
{
int i, j;
char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; original[j] != '\0'; j++)
{
if (str[i] == original[j])
{
str[i] = rotated[j];
break;
}
}
}

return (str);
}
