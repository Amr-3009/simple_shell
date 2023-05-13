#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all av without using ac
 * @ac: no. of args in av
 * @av: array od strings
 * Return: always
 */
 
int main (int ac, char **av)
{
int i;
for (i = 0; i < ac; i++)
{
(void) ac;
printf("%s\n", av[i]);
}
return (0);
}
