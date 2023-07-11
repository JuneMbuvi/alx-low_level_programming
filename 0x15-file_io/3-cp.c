#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
void open_file(const char *file_from, const char *file_to);
void cp_text(int fd1, int fd2, char *buff, const char *f1, const char *f2);
/**
 * main - main file
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	open_file(av[1], av[2]);
	return (0);
}
/**
 * open_file - opens files 1 and 2
 * @file_from: source file
 * @file_to: destination
 * Return: void
 */
void open_file(const char *file_from, const char *file_to)
{
	int fd1, fd2;
	char *buffer;
	int fd1close, fd2close;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(fd1);
		close(fd2);
		return;
	}
	cp_text(fd1, fd2, buffer, file_from, file_to);

	fd1close = close(fd1);
	if (fd1close == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	fd2close = close(fd2);
	if (fd2close == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * cp_text - copies contents of f1 to f2
 * @fd1: fildes for f1
 * @fd2: fildes for f2
 * @f1: ptr to src file
 * @f2: ptr to dest file
 * @buff: storage space
 * Return: void
 */
void cp_text(int fd1, int fd2, char *buff, const char *f1, const char *f2)
{
	int num_of_bytes, j;

	num_of_bytes = 1; /*0 means the read function has completed*/
	j = 1;

	while (num_of_bytes != 0)
	{
		num_of_bytes = read(fd1, buff, 1024);
		if (num_of_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", f1);
			free(buff);
			exit(98);
		}
		j = write(fd2, buff, num_of_bytes);
		if (j == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", f2);
			free(buff);
			exit(99);
		}
	}
}
