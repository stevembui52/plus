#include "shell.h"
#include <sys/wait.h>
/**
 *
 *
 *
 */
void prompt(char **av)
{
	char *lnptr = NULL;
	size_t n = 0;
	char *argv[MAX_CMD];

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "#cisfun$ ", strlen("#cisfun$ "));
		getext(lnptr, argv, n);
		forkexe(av, argv);
	}
	free(lnptr);
}
