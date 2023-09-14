#include "main.h"

/**
 * _isupper - print upper and lowercase
 *@c: char to check
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
