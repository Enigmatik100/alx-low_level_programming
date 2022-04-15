#include "variadic_functions.h"
/**
 * print_strings - function that print strings, followed by new line.
 * @separator: a separator
 * @n: arguments count
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s)
			printf("%s", s);
		else
			printf("nil");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
