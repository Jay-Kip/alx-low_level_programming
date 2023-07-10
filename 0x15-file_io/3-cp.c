#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void close_f(int fd);
char *create_b(char *file);

int main(int argc, char *argv[])
{
	int f, t, b, m;
	char *a;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	a = create_b(argv[2]);
	f = open(argv[1], O_RDONLY);
	b = read(f, a, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do{
		if (f == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(a);
			exit(98);
		}
		m = write(t, a, b);
		if (t == -1 || m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
			free(a);
			exit(99);
		}

		b = read(f, a, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (b > 0);

	free(a);
	close_f(f);
	close_f(t);

	return (0);
}



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
