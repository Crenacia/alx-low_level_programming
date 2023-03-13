#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_conxat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int h = 0, c = 0, m = 0, n = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[h])
		h++;
	while (s2[c])
		c++;
	n = h + c;
	s = malloc((sizeof(char) * n) + 1);
			if (s == NULL)
			return (NULL);
			c = 0;
			while (m < 1)
			{
			if (m <= h)
			s[m] = s1[m];

			if (m >= h)
			{
			s[m] = s2[c];
			c++;
			}
			m++;
			}
			s[m] = '\0';
			return (s);
}

