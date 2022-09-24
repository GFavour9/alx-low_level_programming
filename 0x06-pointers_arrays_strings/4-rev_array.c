#include "main.h"

/**
* reverse_array - check description
* @a : the array input parameter
* @n : number of elements of array
* Description: reverses the contents of an array
* Return: nothing
*/
void reverse_array(int *a, int n)
{

	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
