#include "main.h"

int main(int ac, char **av)
{
/* Declaring variables */
char *input = "$ ";
char *lineptr = NULL;
char *lineptr_cpy = NULL;
char *lineptr_disp = NULL;
size_t n = 0;
ssize_t nchars_read;
const char *delim = " \n";
int token_num = 0;
char *token;
int i;

/* Declaring void variables */
(void)ac;
/* (void)av; --> declared a value for it down the line*/

/* Infinite loop for simulating shell input and functionality*/
    while (1)
    {
        printf("%s", input);
        nchars_read = getline(&lineptr, &n, stdin);

/* allocates space for lineptr_cpy*/
        lineptr_cpy = malloc(sizeof(char) * nchars_read);
        if (lineptr_cpy == NULL)
        {
/*perror("tsh: MEMORY ALLOCATION ERROR");*/
            return (-1);
        }

/* allocates space for lineptr_disp*/
lineptr_disp = malloc(sizeof(char) * nchars_read);
if (lineptr_disp == NULL)
{
/*perror("tsh: MEMORY ALLOCATION ERROR");*/
return (-1);
}

/* copies the string*/
strcpy(lineptr_cpy, lineptr);
strcpy(lineptr_disp, lineptr);

/* checks whether to continue the shell input or exit "ctrl-d" */
if (nchars_read == EOF)
{
printf("Shell offline...\n");
/*return (EOF);*/
break;
}
else
{
/*tokenise the string*/
token = strtok(lineptr, delim);

/*token counter*/
while (token != NULL)
{
token_num++;
token = strtok(NULL, delim);
}
token_num++;
/*printf("The number of tokens is: %d\n", token_num);*/

/* allocating space for the tokens*/
av = malloc(sizeof(char *) * token_num);

/* storing tokens in av array*/
token = strtok(lineptr_cpy, delim);

for(i = 0; token != NULL; i++)
{
av[i] = malloc(sizeof(char) * strlen(token));
strcpy(av[i], token);

/*printf("The contents of av array are: %s \n", av[i]);*/
token = strtok(NULL, delim);
}
av[i] = NULL;
/*token_num = NULL;*/

/* execute commands*/
execmd(av);

/* prints typed line*/
/*printf("%s\n", lineptr_disp);*/
}
}
/* frees up allocated memory*/
free(lineptr);
free(lineptr_cpy);
/*free(av);*/
return (0);
}

