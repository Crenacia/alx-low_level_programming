#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int h = 0;
	int c;

	while (str[h] != '\0')
	{
		h++;
	}
	if (h % 2 == 1)
	{
		c = (h - 1) / 2;
		c += 1;
	}
	else
	{
		c = h / 2;
	}
	for (; c < h; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
