#include "shell.h"
/**
*execmd2 - ex shell commands
*@cmd: input command
*@input: user input
*@c: exe time
*@argv: command ran
*Return: always
*/
int execmd2(char **cmd, char *input, int c, char **argv)
{
int status;
pid_t pid;
if (*cmd == NULL)
return (-1);
pid = fork();
if (pid == -1)
{
perror("Error");
return (-1);
}
if (pid == 0)
{
if (_strncmp(*cmd, "./", 2) != 0 && _strncmp(*cmd, "/", 1) != 0)
{
path_cmd(cmd);
}
if (execve(*cmd, cmd, environ) == -1)
{
error_handler(cmd[0], c, argv);
free(input);
free(cmd);
exit(EXIT_FAILURE);
}
return (EXIT_SUCCESS);
}
wait(&status);
return (0);
}
