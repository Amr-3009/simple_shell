#include "shell.h"

/**
*check_delim - check if there's a match
*@c: character to check
*@str: string to check
*Return: 1 on success, 0 on failure
*/

unsigned int check_delim(char c, const char *str)
{
unsigned int i;

for (i = 0; str[i] != '\0'; i++)
{
if (c == str[i])
return (1);
}

return (0);
}

/**
*_strtok - tokenize a string
*@str: string
*@delim: delimiter
*Return: pointer
*/

char *_strtok(char *str, const char *delim)
{
static char *ts;
static char *nt;
unsigned int i;

if (str != NULL)
nt = str;
ts = nt;
if (ts == NULL)
return (NULL);
for (i = 0; ts[i] != '\0'; i++)
{
if (check_delim(ts[i], delim) == 0)
break;
}

if (nt[i] == '\0' || nt[i] == '#')
{
nt = NULL;
return (NULL);
}

ts = nt + i;
nt = ts;
for (i = 0; nt[i] != '\0'; i++)
{
if (check_delim(nt[i], delim) == 1)
break;
}

if (nt[i] == '\0')
nt = NULL;
else
{
nt[i] = '\0';
nt = nt + i + 1;
if (*nt == '\0')
nt = NULL;
}

return (ts);
}
