#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: zero (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%ls: is positive\n", &n);
}
else if (n == 0)
{
	printf("%ls: is zero\n", &n);
}
else
{
	printf("%ls: is negative\n", &n);
}

return (0);
}
