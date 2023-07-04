#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 = sum1 + a[index];
		a = a + size;
	}

	a = a - size;

	for (index = 0; index < size; index++)
	{
		sum2 = sum2 + a[index];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
