#include "main.h"

/**
 * Description: _strlen - length of string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	int j = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*s++)
	{
		j++;
	}

	return (j);
}

/**
 * Dscription: create_file -  a function that creates a file.
 * @filename: filename
 * @text_content: text_content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1)
		return (-1);

	if (l)
		b = write(f, text_content, l);

	close(f);
	return (b == l ? 1 : -1);
}
