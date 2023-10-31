#include "main.h"
/**
 * read_textfile - 
 * filename: 
 * letters:
 * return:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	ssize_t buffer[letters];

	if (letters < 1 || filename == NULL)
		return(0);
	o = open(filename,O_RDWR);
	if (o == -1)
		return (0);
	r = read(o, buffer, letters);
	if (r == -1)
	{
		close(o);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		close(r);
		return (0);
	}
	close (o);
	return (w);
}
