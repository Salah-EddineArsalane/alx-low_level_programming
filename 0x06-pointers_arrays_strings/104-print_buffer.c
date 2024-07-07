#include "main.h"

/**
 * print_buffer - prints a buffer in a specified format
 * @b: buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x%02x ", (b[i + j] >> 4) & 0xF, b[i + j] & 0xF);
else
printf("     ");

if (j == 9)
printf(" ");
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] >= 32 && b[i + j] <= 126)
printf("%c", b[i + j]);
else
printf(".");
}
}

printf("\n");
}
}
