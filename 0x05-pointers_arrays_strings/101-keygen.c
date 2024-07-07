#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
char password[PASSWORD_LENGTH + 1];
int i, random_num, has_uppercase, has_digit;

srand(time(0));

do
{
i = 0;
has_uppercase = 0;
has_digit = 0;

while (i < PASSWORD_LENGTH - 2)
{
random_num = rand() % 62;

if (random_num < 26)
{
password[i++] = 'a' + random_num;
}
else if (random_num < 52)
{
password[i++] = 'A' + random_num - 26;
has_uppercase = 1;
}
else
{
password[i++] = '0' + random_num - 52;
has_digit = 1;
}
}

password[i++] = rand() % 26 + 'A';
has_uppercase = 1;

password[i++] = rand() % 10 + '0';
has_digit = 1;

password[PASSWORD_LENGTH] = '\0';
}
while (!has_uppercase || !has_digit);

printf("%s\n", password);

return (0);
}
