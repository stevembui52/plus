#include "shell.h"
/**
 * _strlen - Calculate the length of the string
 * @s:pointer
 * Return:length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * printstr - prints a string to the standard output
 * @c:pointer to the string to be printed.
 * Return:number of characters written
 */
int printstr(char *c)
{
	return (write(1, c, _strlen(c)));
}
/**
  * printchr - prints a single character
  * @st: character to check
  * Return:no of characters printed
  */
int printchr(char st)
{
	return (write(1, &st, 1));
}
