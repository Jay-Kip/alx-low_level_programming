<<<<<<< HEAD
#include "main.h"
/**
*_strncat - entry
* @*dest: first string
*@src: second string
* @n: bytes
* Return: zero
*/
char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++:
	}
	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest != '\0';
}
=======
  1 #include "main.h"
  2 /**
  3 *_strncat - entry
  4 * @*dest: first string
  5 *@src: second string
  6 * @n: bytes
  7 * Return: zero
  8 */
  9 char *_strncat(char *dest, char *src, int n)
 10 {
 11         while (*dest != '\0')
 12         {
 13                 dest++:
 14         }
 15         while (*src != '\0')
 16         {
 17                 *dest = *src;
 18                 *dest++;
 19                 *src++;
 20         }
 21         *dest != '\0';
 22}
>>>>>>> a91a2c977db3dac74a83b1b915806e12f8f31628
