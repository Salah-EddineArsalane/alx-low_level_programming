#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
char password[PASSWORD_LENGTH + 1];
int i, random_num, sum;

srand(time(0));

sum = 0;
i = 0;
while (sum < PASSWORD_LENGTH - 1)
{
random_num = rand() % 62;

if (random_num < 26)
password[i++] = 'a' + random_num;
else if (random_num < 52)
password[i++] = 'A' + random_num - 26;
else
password[i++] = '0' + random_num - 52;

sum += 1;
}

password[i++] = rand() % 10 + '0';
password[i++] = rand() % 26 + 'A';

password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);

return (0);
}
