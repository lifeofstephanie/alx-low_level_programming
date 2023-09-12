#include "main.h"

/**
 * _isaplpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character to be checked
 * 
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c > =97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
