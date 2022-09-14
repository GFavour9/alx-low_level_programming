#include "main.h"

/**
* print_last_digit - check description
* @n: An integer input parameter
* Description: it prints the last digit
* of the number
* Return: the last digit
*/
int print_last_digit(int n)
{
	int value;

	if (n < 0)
		value = -1 * (n % 10);
	else
		value = n % 10;
	_putchar(value + '0');

	return (value);
}
