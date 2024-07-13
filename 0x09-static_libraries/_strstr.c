#include "main.h"

char *_strstr(char *haystack, char *needle) {
char *h, *n;

while (*haystack) {
h = haystack;
n = needle;
while (*n && (*h == *n)) {
h++;
n++;
}
if (*n == '\0') {
return haystack;
}
haystack++;
}
return (0);
}
