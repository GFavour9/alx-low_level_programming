#include "main.h"

/**
* _islower - check description
* @c: A char input parameter
* Description: it prints the word a-z in lower case.
* Return: 1 if c is lowercase, otherwise 0
*/
int _islower(int c)
{
	char a;
	int val = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			val = 1;
	}
	return (val);
}
