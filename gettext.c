#include "shell.h"
/**
  *
  *
  *
  *
  */
char *getext(char *lnptr, char *argv[MAX_CMD], size_t n)
{
	ssize_t numchar;
	int i, j;

	numchar = getline(&lnptr, &n, stdin);
	if (numchar == -1)
	{
		free(lnptr);
		exit(EXIT_FAILURE);
	}
	i = 0;
	while(lnptr[i])
	{
		if (lnptr[i] == '\n')
			lnptr[i] = 0;
		i++;
	}
	j = 0;
	argv[j] = strtok(lnptr, " ");
	while (argv[j])
		argv[++j] = strtok(NULL, " ");
	argv[j] = NULL;
	return (lnptr);

}
