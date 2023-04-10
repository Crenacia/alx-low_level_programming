#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *crenacia;
	ssize_t h;
	ssize_t a;
	ssize_t b;

	h = open(filename, O_RDONLY);
	if (h == -1)
		return (0);
	crenacia = malloc(sizeof(char) * letters);
	b = read(h, crenacia, letters);
	a = write(STDOUT_FILENO, crenacia, b);

	free(crenacia);
	close(h);
	return (a);
}
