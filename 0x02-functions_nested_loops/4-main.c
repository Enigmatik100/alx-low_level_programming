#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d \n", _isalpha('a'));
	printf("%d \n", _isalpha('5'));
	printf("%d \n", _isalpha('+'));
	printf("%d \n", _isalpha('O'));
	printf("%d \n", _isalpha('@'));
	printf("%d \n", _isalpha('&'));
	return (0);
}
