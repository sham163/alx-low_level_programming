#include <stdio.h>

/**
 * Description: main - a program that multiplies two numbers.
 * @argc: count
 * @argv: value
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int mu;

	if (argc == 3)
	{
		mu = atoi(argv[1] * argv[2]);
		printf("%d\n", mu);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
