#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - program that prints
 * the number of arguments passed into it.
 * @argc: count
 * @argv: value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int s, le = 0, m = atoi(argv[1]), c[] = {25, 10, 5, 2, 1};

		for (s = 0; s < 5; s++)
		{
			if (m >= c[s])
			{
				le += m / c[s];
				m = m % c[s];

				if (m % c[s] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", le);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
