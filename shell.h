#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <limits.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>

#define BUF_SIZE 1024
#define TOK_BUFSIZE 128
#define TOK_DELIM " \t\r\n\a"
#define MAX_CMD 10
/* points to array of character pointers to the environment strings */
extern char **environ;

int add(int a, int b);
void prompt(char **av);
char **parsestr(char *str);
void forkexe(char **av, char *argv[]);
char *location(char *path, char *arg);
char *getloc(char *arg);
int _strlen(char *s);
int printstr(char *c);
char *getext(char *lnptr, char *argv[MAX_CMD], size_t n);

#endif
