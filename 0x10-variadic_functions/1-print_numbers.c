#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: Sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = 0;
	va_list ar;
	unsigned int i;


	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ar, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", a, separator);
		else
			printf("%d", a);
	}
	va_end(ar);
	printf("\n");
}
