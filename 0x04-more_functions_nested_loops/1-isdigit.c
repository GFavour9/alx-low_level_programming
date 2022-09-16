#include "main.h"

/**
* _isdigit - check description
* @c: int input parameter for the function
* Description: checks if the input is a number
* Return: 1 if c is a digit, otherwise 0
*/
int _isdigit(int c)
{
	int a;
	int value = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
			value = 1;
	}
	return (value);
}
