#include "main.h"

int main(int ac, char **av)
{
    char *input = "$ ";
    char *lineptr;
    size_t n = 0;
    (void)ac;
    (void)av;

    printf("%s", input);
    getline(&lineptr, &n, stdin);
    printf("%s\n", lineptr);

    free(lineptr);
    return (0);
}
