#include "main.h"

/**
 * _isupper - print upper and lowercase
 *@c: char to check

 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
