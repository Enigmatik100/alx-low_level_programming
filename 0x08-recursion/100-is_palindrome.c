#include "main.h"
/**
 * helper - compare two character
 * @s: pointer on string from the start
 * @p: pointer on string from the end
 * Return: 1 if character are the same and 0 otherwise
 */
int helper(char *s, char *p)
{
	if (*s == '\0')
		return (1);
	if (*s != *p)
		return (0);
	return (helper(s + 1, p - 1));
}
/**
 * end_string - put pointer to end
 * @p: pointer on string
 * Return: pointer on end of string
 */
char *end_string(char *p)
{
	if (*p == '\0')
		return (p);
	return (end_string(p + 1));
}
/**
 * is_palindrome - check if string is a palindrome
 * @s: string
 * Return: 1 if string is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	char *p = end_string(s);

	return (helper(s, p - 1));
}
