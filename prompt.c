#include "shell.h"
#include <sys/wait.h>
/**
 *
 *
 *
 */
#define MAX_CMD 10
void prompt(char **av)
{
	char *lnptr;
	size_t n = 0;
	ssize_t numchar;
	int i, j;
	char *argv[MAX_CMD];

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("#cisfun$ ");
		numchar = getline(&lnptr, &n , stdin);
		if (numchar == -1)
		{
			free(lnptr);
			exit(98);
		}
		i = 0;
		while (lnptr[i])
		{
			if (lnptr[i] == '\n')
				lnptr[i] = 0;
			i++;
		}
		j = 0;
		argv[j] = strtok(lnptr, " ");
		while (argv[j])
			argv[++j] = strtok(NULL, " ");
		forkexe(av, argv);
	}
	free(lnptr);
}
