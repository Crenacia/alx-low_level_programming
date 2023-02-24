#include "main.h"

/**
 * more_numbers - print times the numbers since  up to
 * Return: times of the numbers simce up to  
 */

void more_numbers(void)
{
	int h, c;
	
	for (h = 0; h < 10; h++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
