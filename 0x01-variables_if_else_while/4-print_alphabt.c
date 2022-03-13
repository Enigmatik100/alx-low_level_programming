#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for C program
 * Return: 0 showing success execution
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 113 && i != 101)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
