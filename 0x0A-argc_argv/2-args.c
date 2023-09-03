#include <stdio.h>

/**
 * Description: main - a program that prints all arguments it receives.
 * @argc: count
 * @argv: value
 * Return: 0
 */


int main(int argc, char const *argv[])
{
	int i = 0;
	if (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

