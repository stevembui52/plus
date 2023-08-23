#include "shell.h"
/**
  *
  *
  *
  *
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
  *
  *
  *
  *
  */
int printstr(char *c)
{
	return(write(1, c, _strlen(c)));
}
/**
  *
  *
  *
  *
  */
int printchr(char st)
{
	return(write(1, &st, 1));
}

