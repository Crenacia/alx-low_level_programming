#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, count = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		now  = exclusive >> h;
		if (now & 1)
			count++;
	}

	return (count);
}
