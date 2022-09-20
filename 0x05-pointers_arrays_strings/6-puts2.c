#include "main.h"

/**
* puts2 - check description
* @str : string input parameter
* Description: prints the char with step 2
* Return: nothing
*/
void puts2(char *str)
{
	int num = 0;
	int i = 0;

	while (str[num] != '\0')
	{
		num++;
	}
	num--;

	for (; i <= num; i += 2)
		_putchar(str[i]);
	_putchar('\n');

}
