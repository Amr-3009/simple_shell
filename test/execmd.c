#include "main.h"

int execmd(char **av)
{
    char *command = NULL, *a_command = NULL;
    pid_t pid;
    int status;
if (av)
{
    command = av[0];
    a_command = get_location(command);
    pid = fork();
    if (pid == 0)
    {
        if (execve(a_command, av, NULL) == -1)
        {
            perror("ERROR cp");
        }
        exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
            perror("ERROR f");
    }
    else
    {
        do
        {
            waitpid(pid, &status, WUNTRACED);
        }
        while(!WIFEXITED(status) && !WIFSIGNALED(status));
    }
}
    return(-1);
}

