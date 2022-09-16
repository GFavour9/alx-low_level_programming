#include "main.h"

/**
* _isupper - check description
* @c: A input parameter
* Description: it checks if the word a-z is upper case.
* Return: 1 if c is uppercase, otherwise 0
*/
int _isupper(int c)
{
	char a;
	int value = 0;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			value = 1;
	}
	return (value);
}
