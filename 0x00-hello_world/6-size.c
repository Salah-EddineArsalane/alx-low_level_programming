#include <stdio.h>
/**
 * main - Entery point
 *
 * Return : Always 0 (success)
 */
int main(void)
{ printf("Size of a char: %zu byte(s)\nSize of an int: %zu byte(s)\nSize of a long int: %zu byte(s)\nSize of a long long int: %zu byte(s)\nSize of a float: %zu byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
return (0);
}
