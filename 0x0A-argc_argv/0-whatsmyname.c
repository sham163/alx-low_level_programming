#include <stdio.h>

/**
 * Description: program that prints its name, followed by a new line.
 * @argc: count
 * @argv: value
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
