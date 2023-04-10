#include "main.h"
/**
* _strlen - entry
* @s: char
* Return: length of the string
*/
int _strlen(char *s)
{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}
return (longi);

}

