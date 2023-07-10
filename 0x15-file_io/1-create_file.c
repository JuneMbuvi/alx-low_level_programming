#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 *  create_file - creates a file
 *  @filename: ptr to file
 *  @text_content: NULL terminated string to write to the file
 *  Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, i = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
	{
		i++;
		write(STDIN_FILENO, text_content, len);
		len++;
	}
	return (1);
}
