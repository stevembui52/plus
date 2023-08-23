#include "shell.h"
/**
 * getext - Read a line from stdin and extract arguments into an array.
 * @lnptr: Pointer to the line read from stdin.
 * @argv: Array of character pointers to store extracted arguments.
 * @n: Size of the buffer for getline.
 *
 * Return: Pointer to the modified lnptr containing the extracted arguments.
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
