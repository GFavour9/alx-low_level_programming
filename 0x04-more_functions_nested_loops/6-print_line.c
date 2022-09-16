#include "main.h"

/**
* print_line - check description
* @n: An int input parameter
* Description: it prints '-'
* as specified by the user
* followed by a new line
* Return: nothing
*/
void print_line(int n)
{

	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
