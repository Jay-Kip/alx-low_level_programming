#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads and prints file to the POSIX stdout
 * @letters: number of chars to be read and written
 * @filename: the file
 * Return: zero
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fp;
	ssize_t	x;
	ssize_t z;

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	z = read(fp, b, letters);
	x = write(STDOUT_FILENO, b, z);
	free(b);
	close(fp);
	return (x);
}
