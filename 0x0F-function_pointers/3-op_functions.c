#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - function to add two numbers
* @a: first number
* @b: second number
* Return: sum of the numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - function so subtract a number from another
* @a: number to subtract from
* @b: number to be subtracted
* Return: difference of the two numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - function to multiply two numbers
* @a: first number
* @b: second number
* Return: product of the numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function to divide a number from the other
* @a: first number
* @b: second number
* Return: division of the numbers
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - function to calculate the modulus between two numbers
* @a: first number
* @b: second number
* Return: modulus of the two numbers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
