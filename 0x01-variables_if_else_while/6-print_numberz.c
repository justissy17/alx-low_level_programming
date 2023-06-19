#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
	return (0);
}
