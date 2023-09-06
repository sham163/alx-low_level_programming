#include "main.h"
#include <stdlib.h>

/**
 * Description: _length - function returns length of string
 * @str: string
 * Return: length
 */

int _length(char *str)
{
	int l;
	for (l = 0; str[l] != '\0'; l++)
		;
	return (l);
}



/**
 * Description: argstostr - a function that concatenates
 * all the arguments of your program.
 * @ac: int input parameter
 * @av: char input parameter
 * Return:  NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int s, t;
	int st = 0;
	int sham = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (s = 0; s < ac; s++, st++)
		st += _lenrth(av[s]);
	ptr = malloc(sizeof(char) * st + 1);

	if (ptr == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
		for (t = 0; av[s][t] != '\0'; t++, sham++)
			ptr[sham] = av[s][t];

		ptr[sham] = '\n';
		sham++;
	}
	ptr[sham] = '\0';
	return (ptr);
}
