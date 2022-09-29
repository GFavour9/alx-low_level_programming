#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int l);

/**
*_strlen_recursion - A function to obtain the length of the string s
* @s: A string to calculate length
* Return: the length of string s
*/
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}

/**
* is_palindrome - A function that checks if s is a palindrome
* @s: An inpuit string
* Return: 1 if the string is a palindrome else 0
*/
int is_palindrome(char *s)
{
int l;

l = _strlen_recursion(s);
if (l <= 1)
return (1);
return (helper_palindrome(s, l));
}

/**
* helper_palindrome - A function with a revesed string
* @s: An input string
* @l: the length of the string s
* Return: A reverse string
*/
int helper_palindrome(char *s, int l)
{
if (l <= 1)
return (1);
else if (*s == *(s + l - 1))
{
return (helper_palindrome(s + 1, l - 2));
}
else
return (0);

}
