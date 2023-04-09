#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
* main - main function
* @argc: arguement count
* @argv: arguement vector
* Return: zero
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	int k = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", k);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
