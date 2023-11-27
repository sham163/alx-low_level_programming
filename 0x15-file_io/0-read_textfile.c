#include "main.h"

/**
 * Description: read_textfile - a function that reads a text file
 * @filename: filename
 * @letters: letters
 * Return: number bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!letters || !filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		return (0);
	}

	b = read(f, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(f);
	return (b);
}
