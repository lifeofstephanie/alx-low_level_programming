#include "main.h"
/**
 * *_strcpy - copy the string
 * @dest: first
 * @src: second
 * Return: answer
 */

char *strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

