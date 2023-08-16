#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int add(int a, int b);
void prompt(char **av);
char **parsestr(char *str);
void forkexe(char **av, char *argv[]);

#endif
