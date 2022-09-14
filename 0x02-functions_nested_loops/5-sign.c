#include "main.h"

/**
* print_sign - check description
* @n: An integer input parameter
* Description: it checks if the input is
* negative, positive or zero.
* Return: 1 if n is positive,
* -1 if negative and 0 if zero
*/
int print_sign(int n)
{
	int value;

	if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else
	{
		value = 0;
		_putchar('0');
	}

	return (value);
}
