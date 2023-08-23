#include "shell.h"
/**
  *
  *
  *
  */
 char *location(char *path, char *arg)
{
	char *pathcpy, *pathtok, *filepath;
	
	pathcpy = strdup(path);
	pathtok = strtok(pathcpy, ":");
	filepath = malloc(strlen(arg) + strlen(pathtok) + 2);
	while (pathtok != NULL)
	{
		strcpy(filepath, pathtok);
		strcat(filepath, "/");
		strcat(filepath, arg);
		strcat(filepath, "\0");
		if (access(filepath, X_OK) == 0)
		{
			free(pathcpy);
			return (filepath);
			printf("%s\n", filepath);
		}
		pathtok = strtok(NULL, ":");
	}
	free(filepath);
	free(pathcpy);
	return (NULL);
}
/**
  *
  *
  *
  *
  */
char *getloc(char *arg)
{
	char *path;
       	
	path = getenv("PATH");
	if  (path)
	{
		path = location(path, arg);
		return (path);
		printf("%s\n", path); 
	}
	else
		return (NULL);
}	
