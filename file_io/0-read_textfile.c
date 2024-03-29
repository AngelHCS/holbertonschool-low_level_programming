#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - reads textfile & prints to stdout
 *@filename: pointer filename
 *@letters: count function letters to read and print.
 *Return: text file concents to stdout, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (0 == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(0);

	return (w);
}
