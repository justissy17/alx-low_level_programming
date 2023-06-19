#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a code that prints last digit
 * Return: 0(successful)
 */
int main(void)
{
	int n;
	int ldn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldn = n % 10;
	if (ldn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ldn);
	}
	else if (ldn == 0)
	{
	        printf("Last digit of %d is %d and is 0", n, ldn);
	}
	else 
	{
		 printf("Last digit of %d is %d and is less than 6 and not 0", n, ldn);
		 return (0);
	}
}
