#include <stdio.h>

/**
 * Description: main - a program that prints all arguments it receives.
 * @argc: count
 * @argv: value
 * Return: 0
 */


int main(int argc, char const *argv[])
{
	int i;
		for (i = 0; i < argc--; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}

