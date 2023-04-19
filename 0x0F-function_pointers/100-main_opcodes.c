#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int b;
	int i;
	char *A;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	A = (char *)main;

	for (i = 0; i < b; i++)
	{
	if (i == b - 1)
	{
		printf("%02hhx\n", A[i]);
		break;
	}
		printf("%02hhx ", A[i]);
	}
	return (0);
}
