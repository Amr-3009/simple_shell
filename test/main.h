#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>


void execmd(char **av);
char *get_location(char *command);
int stat(const char *pathname, struct stat *statbuf);

