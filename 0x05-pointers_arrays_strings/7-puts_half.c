#include "main.h"

/**
* puts_half - check description
* @str : string input parameter
* Description: prints the bottom half of array
* Return: nothing
*/
void puts_half(char *str)
{
	int num = 0;
	int i = 0;

	while (str[num] != '\0')
	{
		num++;
	}
	if ((num % 2) != 0)
		i = (num + 1) / 2;
	else
		i = num / 2;

	for (; i < num; i++)
		_putchar(str[i]);
	_putchar('\n');

}
