#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet in lowercase
 * Return: void nothing to return
 */
void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i < 97 + 26; i++)
		putchar(i);
	putchar('\n');
}
