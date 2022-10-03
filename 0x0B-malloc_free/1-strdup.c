#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  * Return: NULL if str = NULL else a pointer to the duplicated string
  */
char *_strdup(char *str)
{
	char *s;
	int b = 1, a = 0;

	if (str == NULL)
		return (NULL);
	while (str[b])
		b++;
	s = malloc((sizeof(char) * b) + 1);
	if (s == NULL)
		return (NULL);
	while (a < b)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
