#include "main.h"
/**
 * _islower -checker if a char is lowercase
 * @c: charecter to be tested
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
