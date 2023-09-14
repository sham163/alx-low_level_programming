#include "3-calc.h"

/**
 * Description: main - check point
 * @argc: count
 * @argv: value
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int (*op_fun)(int, int), c, d;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	c = atoi(argv[1]);
	d = atoi(argv[3]);

	op_fun = get_op_func(argv[2]);

	if (op_fun == NULL)
	{
		printf("Error\n"), exit(99);
	}

	if (d == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n"), exit(100);
	}

	printf("%d\n", op_fun(c, d));

	return (0);
}
