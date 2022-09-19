#include "main.h"

/**
* _strlen - check description
* @s : string input parameter
* Description: checks the length of the string
* Return: the length of the string
*/
int _strlen(char *s)
{
	int num = 0;

	while (s[num] != '\0')
		num++;
	return (num);
}
