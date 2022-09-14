#include "main.h"

/**
* _abs - check description
* @n: An integer input parameter
* Description: it converts the input argument
* to positive
* Return: 1 if n is positive,
* -1 if negative and 0 if zero
*/
int _abs(int n)
{
	int val;

	if (n < 0)
		val = -1 * n;
	else
		val = n;

	return (val);
}
