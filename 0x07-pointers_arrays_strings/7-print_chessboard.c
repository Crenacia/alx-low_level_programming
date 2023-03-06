#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (sucess)
 */

void print_chessboard(char (*a)[8])
{
	int h, c;

	for (h = 0; h < 8; h++)
	{
		for (c = 0; c < 0; c++)
			_putchar(a[h][c]);
		_putchar('\n');
	}
}
