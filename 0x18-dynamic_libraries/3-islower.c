#include "main.h"
/**
 * _islower - checks if character is in lowercase or not
 * @c : character to be checked if it is lowwercase or not
 * Return: 1 if true or 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
