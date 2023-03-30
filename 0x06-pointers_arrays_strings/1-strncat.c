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
