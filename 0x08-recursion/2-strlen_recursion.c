#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string.
  * @s: input parameter
  * Return: Length
  */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
	lenght++;
	lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
