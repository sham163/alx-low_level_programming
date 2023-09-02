#include <stdio.h>

/**
 * Description: main - a program that prints all arguments it receives.
 * @argc: count
 * @argv: value
 * Return: 0
 */


int main(int argc, char const *argv[])
{

	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}

