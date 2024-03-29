#include "lists.h"
/**
* is_palindrome - checks if number is a palindrome
* @num: number to bechecked if it is a palindrome
* Return: number if is palindrome
*/
int is_palindrome(int num)
{
	int reversed = 0;
	int original = num;

	while (num > 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return original == reversed;
}

/**
* largest_palindrome - checks for the largest palindrome
* Return: largest palindrome
*/

int largest_palindrome()
{
	int largest_palindrome = 0;
	int i, j;
	for (i = 10; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int product = i * j;
			if (is_palindrome(product) && product > largest_palindrome)
			{
				
				largest_palindrome = product;
			}
		}
	}
	return largest_palindrome;
}
/**
* main - main function
* Return: zero
*/
int main()
{
	int result = largest_palindrome();
	FILE *file = fopen("102-result", "w");
	if (file != NULL)
	{
		printf("%d", result);
		fclose(file);
	}
	return(0);
}

