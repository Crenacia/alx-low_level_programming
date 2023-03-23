#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numnbers, followed by a new line.
 * Separator: The string to be printed between numbers.
 * @n: The number of intergers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
