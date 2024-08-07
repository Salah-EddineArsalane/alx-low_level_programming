#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_helper - helps to determine if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the substring to check
 * @end: the ending index of the substring to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len == 0)
{
return (1);
}
return (is_palindrome_helper(s, 0, len - 1));
}
