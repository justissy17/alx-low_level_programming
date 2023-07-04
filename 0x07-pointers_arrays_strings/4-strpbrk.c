#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: strings to be searched for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * if no such byte is found - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
