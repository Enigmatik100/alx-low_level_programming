#include <stdio.h>
/**
* main - entry point of every C program
* Return: 0 showing success message
*/

int main(void)
{
	int ascii_code = 97;

	while (ascii_code < 123)
	{
		putchar(ascii_code);
		ascii_code += 1;
	}
	putchar('\n');
	return (0);
}
