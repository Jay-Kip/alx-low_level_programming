#include <stdio.h>
/**
* main - main function
* @i: arguement count
* @j: arguement vector
* Return: zero
*/
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
