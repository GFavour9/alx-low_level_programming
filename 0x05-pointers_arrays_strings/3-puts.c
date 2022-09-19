#include "main.h"

/**
* _puts - check description
* @str : string input parameter
* Description: prints a string
* Return: nothing
*/
void _puts(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		_putchar(str[num]);
		num++;
	}
	_putchar('\n');

}
