#include "main.h"

int main(int ac, char **av)
{
    char *input = "$ ";
    char *lineptr;
    size_t n = 0;
    ssize_t nchars_read;

    (void)ac;
    (void)av;

    while (1)
    {
        printf("%s", input);
        nchars_read = getline(&lineptr, &n, stdin);
        if (nchars_read == -1)
        {
            printf("Shell Offline\n");
            return (-1);
        }
        printf("%s\n", lineptr);
        free(lineptr);
    }
    return (0);
}
