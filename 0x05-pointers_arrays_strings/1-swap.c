#include "main.h"

/**
* swap_int - check description
* @a : first int input parameter
* @b : second int input parameter
* Description: swaps the values oftwo integers
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;

}
