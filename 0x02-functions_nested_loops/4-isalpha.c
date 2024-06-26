#include "main.h"



/**
 * _isalpha - Entry point
 * @c: asdf
 * Description: Longer description of the function)?
 * Return: 0 if success
 */
int _isalpha(int c)
{
	if (('a' < c && c < 'z') || ('A' < c && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
