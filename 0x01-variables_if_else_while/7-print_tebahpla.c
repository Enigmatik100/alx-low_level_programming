#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for C program
 * Return: 0 showing success execution
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
