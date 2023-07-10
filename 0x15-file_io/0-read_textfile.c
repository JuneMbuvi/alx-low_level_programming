#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - text file and prints it to the POSIX standard output
 * @filename: ptr to name of file to read from
 * @letters: number of letters it should read and print
 * Return: no. of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t m, n;
	ssize_t fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char ) * letters);

	m = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (n);
}
