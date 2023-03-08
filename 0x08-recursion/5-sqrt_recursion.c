#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 *_sqrt_recursion -Returns the natural square room of a number
 @n: number to calculate the natural swuare root
 @Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
			}
/*  _sqrt - calculates natural square root
 * @n: numnber to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
return (-1);
if (sqrt == n)
return (1);
return (_sqrt(n, i + 1));
}

