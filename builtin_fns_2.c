#include "shell.h"

/**
 *n_echo - executes normal echo
 *@cmd: command
 *Return: 0 on success, 1 on failure
 */

int n_echo(char **cmd)
{
    pid_t pid;
    int status;

    pid = fork();
    if (pid == 0)
    {
        if (execve("/bin/echo", cmd, environ) == -1)
        {
            return (-1);
        }

        exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
        return (-1);
    }
    else
    {
        do
        {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    return (1);
}

/**
 *disp_history - displays user input history
 *@c: command
 *@state: input 2
 *Return: 0 on success, 1 on failure
 */

int disp_history(__attribute__((unused)) char **c, __attribute__((unused)) int state)
{
    char *filename = ".simple_shell_history";
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    int counter = 0;
    char *am;

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        return (-1);
    }

    while ((getline(&line, &len, fp)) != -1)
    {
        counter++;
        am = _itoa(counter);
        PROMPT(am);
        free(am);
        PROMPT(" ");
        PROMPT(line);
    }

    if (line)
        free(line);
    fclose(fp);
    return (0);
}