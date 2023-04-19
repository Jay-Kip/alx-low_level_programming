#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_op_func- function to get the correct operator
* @s: operator passed
* Return: a pointer to a function corresponding
*/
int (*get_op_func(char *s))(int, int)
{
	oper ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
