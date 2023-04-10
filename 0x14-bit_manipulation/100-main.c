#include <stdio.h>
#include "main.h"

/**
 * main - function that returns the number of bits you would need to flip
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
