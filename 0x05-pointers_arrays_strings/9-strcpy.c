#include "main.h"

/**
* *_strcpy - check description
* @dest : string outputparameter
* @src : string input parameter
* Description: prints a string
* Return: nothing
*/
char *_strcpy(char *dest, char *src)
{
	char *tempo = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (tempo);

}
