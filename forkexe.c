#include "shell.h"
#include <sys/wait.h>
/**
 *
 *
 *
 *
 *
 */
void forkexe(char **av, char *argv[])
{
	pid_t chpid;

	chpid = fork();
	if (chpid == -1)
		exit(1);
	if (chpid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
			printf ("%s : No such file or directory\n", av[0]);
	}
	else
	{
		wait(NULL); 
	}
}
