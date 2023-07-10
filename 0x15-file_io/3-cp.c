#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void close_f(int fd);
char *create_b(char *file);
/**
 * main - main function
 * @argc: arguement count
 * @argv: arguement vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_b(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_f(from);
	close_f(to);

	return (0);
}

/**
* create_b - funtion to create buffer
* @file: file
* Return: copy
*/

char *create_b(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't Write to %s\n", file);
		exit(99);
	}
	return (b);
}
/**
 * * close_f - function to close file
 * @fd: file descriptor to be closed
 */


void close_f(int fd)
{
	int t;

	t = close(fd);

	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
