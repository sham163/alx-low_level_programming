#include "main.h"
#include <stdlib.h>

/**
 * Description: count - return the num of word
 * @str: char input parameter
 * Return: count of words
 */

int count(char *str)
{
	int s, t = 0;

	for (s = 0; str[s]; s++)
	{
		if (str[s] == ' ')
		{
			if (str[s + 1] != " " && str[s + 1] != '\0')
				t += 1;
		}
		else if (s == 0)
			t += 1;
	}
	t += 1;
	return (t);
}

/**
 * Description: strtow - a function that splits a string into words.
 * @str: char input parameter
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int s, t, u, v;
	int w = 0;
	int wx = 0;
	char **ptr;

	if (str == NULL)
		return (NULL);
	if (*str == '\0')
		return (NULL);
	w = count(str);
	if (w == 1)
		return (NULL);
	ptr = malloc(w * sizeof(char *));
	if (ptr == 0)
		return (NULL);
	ptr[w - 1] = NULL;
	s = 0;
	while (str[s])
	{
		if ((s == 0 || str[s - 1] == ' ') && str[s] != ' ')
		{
			for (t = 1; str[s + t] && str[s + t] != ' '; t++)
				;
			t++;
			ptr[wx] = malloc(t * sizeof(char));
			t--;
			if (ptr[wx] == NULL)
			{
				for (u = 0; u < wx; u++)
					free(ptr[u]);
				free(ptr[w - 1]);
				free(ptr);
				return (NULL);
			}
			for(v = 0; v < t; v++)
				ptr[wx][v] = str[t + v];
			ptr[wx][v] = '\0';
			wx += 1;
			s = s + t;
		}
		else
			s += 1;
	}
	return (ptr);
}
