#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nothing on success
 */
void times_table(void)
{
	int s = 0, e = 9, count = 0;

	while (count <= 9)
	{
		while (s <= e)
		{
			int crenacia = count * s;

			if (s != 0)
			{
				_putchar(',');
				if (crenacia < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			if (crenacia < 10)
				_putchar(crenacia + '0');
			else 
			{
				_putchar(crenacia / 10 + '0');
				_putchar(crenacia % 10 + '0');
			}
			if (s == e)
				_putchar('\n');
			s++;
		}
		s = 0;
		count++;
	}
}
