#include "main.h"

/**
* print_rev - check description
* @s : string input parameter
* Description: prints a string in reverse
* Return: nothing
*/
void print_rev(char *s)
{
	int num = 0;

	while (s[num] != '\0')
	{
		num++;
	}
	for (; num >= 0; num--)
		_putchar(s[num]);
	_putchar('\n');

}
