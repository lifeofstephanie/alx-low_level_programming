#include "main.h"
#include <stdio.h>

/**
 * print_array - print the array
 * @a: forst integer
 * @n: second
 * Return: answers
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
