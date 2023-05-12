#include "main.h"

void execmd(char **av)
{
char *command = NULL, *a_command = NULL;
if (av)
{
/* command is at av index 0 (first token)*/
command = av[0];
/* generate path to the command*/
a_command = get_location(command);
/* command execution with execve*/
if (execve(a_command, av, NULL) == -1)
{
perror("ERROR");
}
}
}

