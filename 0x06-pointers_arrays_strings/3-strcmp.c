#include "main.h"

/**
* *_strcmp - check description
* @s1 : input 1
* @s2 : input 2
* Description: To compare 2 strings
* Return: pointer to the resulting string
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
