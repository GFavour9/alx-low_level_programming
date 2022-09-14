#include "main.h"

/**
* _isalpha - check description
* @c: char input parameter for the function
* Description: checks if the input is an alphabet.
* Return: 1 if c is lowercase, otherwise 0
*/
int _isalpha(int c)
{
	char a;
	int value = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c || a - 32 == c)
			value = 1;
	}
	return (value);
}
