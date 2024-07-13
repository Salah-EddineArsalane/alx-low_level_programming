#include "main.h"

unsigned int _strspn(char *s, char *accept) {
unsigned int count = 0;
char *a;

while (*s) {
for (a = accept; *a; a++) {
if (*s == *a) {
count++;
break;
}
}
if (*a == '\0') {
break;
}
s++;
}
return count;
}
