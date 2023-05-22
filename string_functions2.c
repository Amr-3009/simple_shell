#include "shell.h"

/**
 * _strncpy - copies n items from string
 * @dest: input 1
 * @src: input 2
 * @n: intput
 * Return: always char
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (i < n && *(src + i))
    {
        *(dest + i) = *(src + i);
        i++;
    }
    while (i < n)
    {
        *(dest + i) = '\0';
        i++;
    }
    return (dest);
}

/**
 * _atoi - convert to int
 * @s: input
 * Return: always int
 */

int _atoi(char *s)
{
    int i, j, n, x;
    i = n = 0;
    x = 1;

    while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
    {
        if (s[i] == '-')
            x *= -1;
        i++;
    }
    j = i;
    while ((s[j] >= '0') && (s[j] <= '9'))
    {
        n = (n * 10) + x * ((s[j]) - '0');
        j++;
    }
    return (n);
}

/**
 * _puts - prints a string
 * @str: input
 * return: always void
 */

void _puts(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
    return;
}

/**
 * _strcmp - compares 2 strings
 * @s1: ip 1
 * @s2: ip 2
 * Return: cmp value 0 if same, otherwise returns difference
 */

int _strcmp(char *s1, char *s2)
{
    int cmp = 0, i, len1, len2;
    len1 = _strlen(s1);
    len2 = _strlen(s2);

    if (s1 == NULL || s2 == NULL)
        return (1);
    if (len1 != len2)
        return (1);
    for (i = 0; s1[i]; i++)
    {
        if (s1[i] != s2[i])
        {
            cmp = s1[i] - s2[i];
            break;
        }
        else
            continue;
    }
    return (cmp);
}

/**
 * _isalpha - checks if c is alphabetical char
 *@c: input
 * Return: 1 if true, o if false
 */

int _isalpha(int c)
{
    if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
