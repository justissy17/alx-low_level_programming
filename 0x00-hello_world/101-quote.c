#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that works on unix
 * Return: 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout, 
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19", stdout));
	return (1);
}
