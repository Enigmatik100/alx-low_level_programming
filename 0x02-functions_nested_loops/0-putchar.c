#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	char letters[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	for (i = 0; i < 8; i++)
		putchar(letters[i]);
	putchar('\n');
	return (0);
}
