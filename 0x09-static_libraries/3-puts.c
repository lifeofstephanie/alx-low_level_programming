#include "main.h"
#include <stdio.h>

/**
 * _puts - prints out a string
 * @str: the string to be printed out
 * Return: prints out a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
