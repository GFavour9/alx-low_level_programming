#include "main.h"
/**
* main - check description
* Description: it prints the word _putchar using an array.
* Return: 0.
*/
int main(void)
{
	int a;
	char d[8] = "_putchar";

	for (a = 0; a < 8; a++)
	{
		_putchar(d[a]);
	}
	_putchar('\n');

	return (0);
}
