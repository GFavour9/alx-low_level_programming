#include "main.h"

/**
* *_strcat - check description
* @dest : string output parameter
* @src : string input parameter
* Description: concatenates two strings
* Return: pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	char *t = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (t);

}
