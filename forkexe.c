#include "shell.h"
#include <sys/wait.h>
/**
 * forkexe - executes commands
 *@av:the argument vector
 *@argv:arguments to pass
 */
void forkexe(char **av, char *argv[], char *path)
{
	pid_t chpid;

	chpid = fork();
	if (chpid == -1)
		exit(1);
	if (chpid == 0)
	{
		if (execve(path, argv, NULL) == -1)
			_printf("%s : No such file or directory\n", av[0]);
	}
	else
	{
		wait(NULL);
	}
}
