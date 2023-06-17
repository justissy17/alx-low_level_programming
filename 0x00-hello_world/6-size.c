#include <stdio.h>
/**
 * main - A program that prints on computer various types
 * Return: 0(successful)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int j;
	float k;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(k));
return (0);
}
