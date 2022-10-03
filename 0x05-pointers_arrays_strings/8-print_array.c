#include <stdio.h>
#include "main.h"

/**
 * print_array - Function that prints n elements of an array of intergers,
 * followed by a new line.
 * @n: number of elements of array to be printed.
 * @a: Pointer to array of intergers.
 *
 * Return: No return
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", a[len]);
		if (len != n - 1)
			printf(", ");
	}
	printf("\n");
}
