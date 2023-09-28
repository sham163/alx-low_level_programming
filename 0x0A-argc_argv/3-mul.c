#include <stdlib.h>
#include <stdio.h>

/**
* Description: main - a program that multiplies two numbers.
* @argc: count
* @argv: value
* Return: 0 if success
*/

int main(int argc, char *argv[])
{
if (argc != 3) {
printf("Error\n");
return (1);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;

printf("%d\n", result);
return (0);
}
