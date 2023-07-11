#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_buffer - allocates 1024 bytes to a buffer
 * @file: file whose contents are being stored in buffer
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
}
/**
 * close_file - closes a file
 * @fd: fildes
 */
void close_file(int fd)
{
	int j;

	j = close(fd);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - main file
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	int m, n, file_from, file_to;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(av[2]);
	file_from = open(av[1], O_RDONLY);
	file_to	= open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	m = read(file_from, buffer, 1024);

	do {
		if (file_from == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file NAME_OF_THE_FILE%s\n", av[1]);
			free(buffer);
			exit(98);
		}

		n = write(file_to, buffer, m);

		if (file_to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to NAME_OF_THE_FILE%s\n", av[2]);
			exit(99);
		}
		m = read(file_from, buffer, 1024);
		file_to = open(av[2], O_WRONLY | O_APPEND);
	} while (m > 0);
	free(buffer);
	close(file_from);
	close(file_to);

	return (0);
}
