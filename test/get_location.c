#include "main.h"

char *get_location(char *command)
{
char *path, *path_cpy, *path_token, *file_path;
int command_length, directory_length;
struct stat buffer;

/* gets the path*/
path = getenv("PATH");

if (path)
{
path_cpy = strdup(path);

/* getting the length of the command*/
command_length = strlen(command);

/* tokenizing the path string*/
path_token = strtok(path_cpy, ":");
while(path_token != NULL)
{
/* Directory length*/
directory_length = strlen(path_token);
file_path = malloc(command_length + directory_length + 2);

/* getting the full file path*/
strcpy(file_path, path_token);
strcat(file_path, "/");
strcat(file_path, command);
strcat(file_path, "\0");
/* the full file path should be something like this --> gggg/{ls} */

/* checking if the path actually exists*/
if (stat(file_path, &buffer) == 0)
{
free(path_cpy);
return (file_path);
}
else
{
free(file_path);
/* tokenizing the path string*/
path_token = strtok(NULL, ":");
}
}

/* freeing up allocated memory*/
free(path_cpy);

if (stat(command, &buffer) == 0)
{
return (command);
}
return (NULL);
}
return (NULL);
}

