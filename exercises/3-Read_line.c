#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    char *input = "$ ";
    char *lineptr;
    size_t n = 0;
    printf("%s", input);
    getline(&lineptr, &n, stdin);
    printf("%s\n", lineptr);
    free(lineptr);
    return (0);
}
