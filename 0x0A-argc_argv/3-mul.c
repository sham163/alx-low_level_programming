#include <stdio.h>

/**
 * Description: main - a program that multiplies two numbers.
 * @argc: count
 * @argv: value
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int mu = 1;

	if (argc == 3)
	{
		mul = atoi(argv[1] * argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
