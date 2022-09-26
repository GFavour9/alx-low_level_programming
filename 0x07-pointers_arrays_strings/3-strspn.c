#include "main.h"
#include <stdio.h>

/**
  * _strspn - Returns the number of bytes
  * in the initial segment of s which consist only of bytes from accept
  * @s: the string tp search through
  * @accept: char to look for
  *
  * Return: the a pointer to the first occurrence of c
  */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int state;
	char *first = accept;

	while (*s)
	{
		state = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				n++;
				state = 1;
				break;
			}
			accept++;
		}
		accept = first;
		s++;
		if (state == 0)
			break;
	}

	return (n);
}
