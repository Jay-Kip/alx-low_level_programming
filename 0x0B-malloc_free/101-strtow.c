#include "main.h"
#include <stdlib.h>
/**
* strtow - function to split  a string to two wordsstring to be split
* @s: string
* Return: splitted string
*/
int wc(char *s);

char **strtow(char *str)
{
	char **d;
	char *tmp;
	int i = 0;
	int j = 0;
	int len = 0;
	int w = 0;
	int c = 0;
	int start;
	int end;

	while (*(str + len))
		len++;

	w = wc(str);

	if (w == 0)
		return (NULL);
	d = (char **)  malloc(sizeof(char *) * (w + 1));

	if (d == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if ((str[i] ==  " ") || (str[i] == '\0'))
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				d[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	d[j] = NULL;
	return (d);
}
/**
* wc - function to count words
* @s: string
*Return: number of words
*/

int wc(char *s)
{
int f, c, w;
f = 0;
w = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
f = 0;
else if (f == 0)
f = 1;
w++;
}
return (w);
}
