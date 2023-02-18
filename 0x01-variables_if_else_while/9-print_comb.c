#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print any number
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

