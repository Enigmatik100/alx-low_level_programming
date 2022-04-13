#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer to function return void and taking string as argument
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
