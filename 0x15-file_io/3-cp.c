#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - creates buffer with 1024 bytes of memory
 * @file: file being created
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
/**
 * close_file - closes files
 * @fd: file descriptor in question
 * Return: 0
 */

void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - main entry
 * @argc: number of arguments
 * @argv: location of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, w, to, from;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		{
			if (r == -1 || from == -1)
			{
				dprintf(STDERR_FILENO,
						"Error: Can't read from file %s\n", argv[1]);
				exit(98);
			}

			w = write(to, buffer, r);
			if (w == -1 || to == -1)
			{
				dprintf(STDERR_FILENO,
						"Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
			r = read(from, buffer, 1024);

			to = open(argv[2], O_WRONLY | O_APPEND);

		} while (r > 0);
		close_file(from);
		close_file(to);
		return (0);
	}
}
