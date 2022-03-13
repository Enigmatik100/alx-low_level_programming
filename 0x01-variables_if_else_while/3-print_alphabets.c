#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for C program
 * Return: 0 showing success execution
 */
int main(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
		putchar(i);
	for (i = 65; i < 65 + 26; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
