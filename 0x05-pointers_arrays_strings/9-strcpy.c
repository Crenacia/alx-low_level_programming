#include "main.h"

/*
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int h;

	for (h = 0; src[h] != '\0'; h++)
	{
		dest[h] = src[h];
	}
	dest[h++] = '\0';
	return (dest);
}
