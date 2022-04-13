#include "calc.h"
/**
 * get_op_func - get function depend on the operator
 * @s: operator
 *
 * Return: a pointer to the function op_add
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (0);
}
