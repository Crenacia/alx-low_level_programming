#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		printf("%d", a[h]);
		if (h != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
