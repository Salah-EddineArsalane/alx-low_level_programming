#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to append to (pointer to char array).
 * @src: The source string to append from (pointer to char array).
 *
 * Return: Pointer to the destination string `dest`.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;

while (dest[dest_len] != '\0')
{
dest_len++;
}

while (src[i] != '\0')
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return dest;
}
