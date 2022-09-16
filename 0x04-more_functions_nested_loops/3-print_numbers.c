#include "main.h"

/**
* print_numbers - check description
* Description: program to print from 0-9.
* Return: Nothing.
*/
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
