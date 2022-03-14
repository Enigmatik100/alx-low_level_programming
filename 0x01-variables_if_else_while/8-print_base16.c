#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for C program
 * Return: 0 showing success execution
 */
int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	for (j = 97; j < 103; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
