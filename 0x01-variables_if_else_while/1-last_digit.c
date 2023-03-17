#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: zero (Seccess)
*/
int main(void)
{
	int n;
	int last_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_number = n % 10;

	if (last_number > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if (last_number == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else if (last_number < 6 && last_number != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
}
