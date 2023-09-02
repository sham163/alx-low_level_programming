#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - a program that adds positive numbers.
 * @argc: count
 * @argv: value
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	int sham = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		sham = sham + atoi(argv[argc]);
	}
	printf("%d\n", sham);
	return (0);
}
