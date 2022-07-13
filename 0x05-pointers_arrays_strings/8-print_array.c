#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n element of an array of integers,
 * followed by a new line
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_arr(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			ptintf(", ");
	}
	putchar('\n');
}
