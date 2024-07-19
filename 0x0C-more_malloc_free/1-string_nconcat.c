#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the newly allocated memory containing s1,
 * followed by the first n bytes of s2, and null terminated.
 * If the function fails, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

concat = malloc((len1 + n + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < n; j++)
concat[len1 + j] = s2[j];

concat[len1 + j] = '\0';

return (concat);
}
