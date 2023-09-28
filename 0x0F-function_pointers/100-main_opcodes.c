#include <stdio.h>
#include <stdlib.h>

/**
 * Description: print_opcodes - function
 * @start: start
 * @num_bytes: num_bytes
 */



void print_opcodes(char *start, int num_bytes)
{
int i;
for (i = 0; i < num_bytes; i++)
{
printf("%02hhx", start[i]);
if (i < num_bytes - 1)
{
printf(" ");
}
else
{
printf("\n");
}
}
}

/**
 * Description: main - a program that multiplies two numbers.
 * @argc: count
 * @argv: value
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
fprintf(stderr, "Error\n");
return (2);
}

char *main_address = (char *)main;


print_opcodes(main_address, num_bytes);

return (0);
}
