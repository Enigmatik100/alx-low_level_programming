#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: the format of data to be printed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int n = 0, i = 0;
	char *s, *sep;
	va_list ap;

	sep = ", ";

	while (format && format[n])
		n++;

	va_start(ap, format);
	while (i < n)
	{
		if (format[i])
		{
			if (i == n - 1)
				sep = "";
			switch (format[i])
			{
				case 'c':
					printf("%c%s", va_arg(ap, int), sep);
					break;
				case 'i':
					printf("%d%s", va_arg(ap, int), sep);
					break;
				case 'f':
					printf("%f%s", va_arg(ap, double), sep);
					break;
				case 's':
					s = va_arg(ap, char *);
					if (s == NULL)
						s = "(ceil)";
					printf("%s%s", s, sep);
					break;

			}
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
