#include "main.h"

/**
 * _strlen - print out strubg length
 * @s: value of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
