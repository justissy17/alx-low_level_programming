#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: input char
 * Return: len of string
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
