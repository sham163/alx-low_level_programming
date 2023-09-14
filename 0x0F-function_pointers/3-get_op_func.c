#include "3-calc.h"


/**
 * Description: get_op_func - function to use
 * @s: string input parameter
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{"+", op_add},
		{"-", op_sub},
		{NULL, NULL}
	};

	int t = 0;

	while (t < 5)
	{
		if (s != NULL && s[0] == ops[t].op[0] && s[1] == 0)
		{
			return (ops[t].f);
		}
		t++;
	}
	return (NULL);
}
