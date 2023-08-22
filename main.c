#include "shell.h"
/**
 * main - The entry of the program
 * @argc: argument command line numbers
 * @argv: array of command line
 *
 * Return: exit
 */

int main(int argc, char *argv[])
{
	 if (argc == 1)
		prompt(argv);
	return (0);
}
