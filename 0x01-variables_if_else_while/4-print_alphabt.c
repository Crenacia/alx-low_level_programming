#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print any number
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char c;

	c = 'a';

	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

