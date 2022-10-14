#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function to add two numbers
  * @a: first operand
  * @b: second operand
  *
  * Return: ...
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function to subtract a number from another number
  * @a: first operand
  * @b: second operand
  *
  * Return: sum of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function to multiply 2 numbers
  * @a: first operand
  * @b: second operand
  *
  * Return: the difference of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - funcrion to divide 2 numbers
  * @a: dividend
  * @b: divisor
  *
  * Return: the quotient of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function to calculate a modulo function
  * @a: the number
  * @b: base
  *
  * Return: a mod b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
