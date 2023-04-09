#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
/**
* main - main function
* @argc: arguement count
* @argv: arguement vector
* Return: zero
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	unsigned int j;
	char *h;


	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			h = argv[i];
			for (j = 0; j < strlen(h); j++)
			{
				if (h[j] < 48 || h[j] > 57)
				{
					printf("Error\n");
					return (5);
				}
			}
		sum += atoi(h);
		h++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
