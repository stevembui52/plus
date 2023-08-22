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
	while (s[len])
	{
		len++;
		s++;
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


