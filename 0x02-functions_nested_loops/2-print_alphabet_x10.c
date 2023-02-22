#include "main.h"
/**
 * print_alphabet - print all alphabets in lowercase
 *
 * Return: nothing on success.
 */

void print_alphabet_x10(void)
{
	int start = 99, end = 124, count = 1;

	while (count <= 10)
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		start = 99;
		count++;
	}
}
