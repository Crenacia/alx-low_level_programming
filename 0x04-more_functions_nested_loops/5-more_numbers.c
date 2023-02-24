#include "main.h"

/**
 * more_nummbers - print times the numbers since  up to 
 * Return:  times of the numbers since  up to 
 */

void  main(void)
{
	int h, c;
	for (h = 0; h < 10; h++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
