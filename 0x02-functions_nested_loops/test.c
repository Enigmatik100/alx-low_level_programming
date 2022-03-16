#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	char letters[] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
		_putchar(letters[i]);
	_putchar('\n');
	return (0);
}
