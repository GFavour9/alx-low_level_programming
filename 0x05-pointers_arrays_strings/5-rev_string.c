#include "main.h"

/**
* rev_string - check description
* @s : string input parameter
* Description: reverses the string
* Return: nothing
*/
void rev_string(char *s)
{
	int num = 0;
	int i;
	char tempo;

	while (s[num] != '\0')
	{
		num++;
	}
	num--;

	for (i = 0; i < num; i++)
	{
		tempo = s[i];
		s[i] = s[num];
		s[num] = tempo;
		num--;
	}

}
