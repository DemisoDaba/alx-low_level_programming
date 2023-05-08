#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nr, nw;
	char *buff;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buff = (sizeof(char) * (letters));
	if (!buff)
		return (0);

	nr = read(f, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(f);

	free(buff);

	return (nw);
}
