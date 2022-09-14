#include "main.h"

/**
* print_alphabet - check description
* Description: it prints the word a-z in lower case.
* Return: Nothing.
*/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
