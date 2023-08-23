#include "shell.h"
#include <sys/wait.h>
/**
 * prompt - This function displays a shell prompt
 *
 * @av:array of command line argument string
 */
void prompt(char **av)
{
	char *lnptr = NULL, *path;
	size_t n = 0;
	char *argv[MAX_CMD];

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "#cisfun$ ", _strlen("#cisfun$ "));
		getext(lnptr, argv, n);
		path = getloc(argv[0]);
		if  (path ==  NULL)
		{
			forkexe(av, argv, path);
		}
		else
			forkexe(av, argv, path);
	}
	free(lnptr);
}
