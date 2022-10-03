#include "main.h"
#include <stdlib.h>

/**
* str_concat - A function that concatenates two strings
* @s1: A pointer of the first input string
* @s2: A pointer of the second input string
* Return: A pointer to concatenated strings or NULL if it str is NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *n_str, *start1, *start2;
	int i = 0, lens1 = 0, lens2 = 0;

	start1 = s1;
	start2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = start1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = start2;
	n_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	start1 = n_str;
	if (n_str == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			n_str[i] = *s1;
			s1++;
		}
		else
		{
			n_str[i] = *s2;
			s2++;
		}
	}
	n_str[i] = '\0';
	return (start1);
}
