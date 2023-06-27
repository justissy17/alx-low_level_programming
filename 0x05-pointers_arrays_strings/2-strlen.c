#include <stdio.h>

/**
 * _strlen -  Returns the length of a string.
 * @str: The string to the lenght of
 * Return: lenght of @str.
 */

size_t  _strlen(const char *str)
{
	size_t lenght = 0;

	while (*str++)
		lenght++;
	return (lenght);
}
