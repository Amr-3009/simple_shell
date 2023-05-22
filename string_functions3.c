#include "shell.h"

/**
 * intlen - gets length of integar
 * @n: input int
 * Return: always int
 */

int intlen(int num)
{
    int len = 0;
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/**
 * _strcat - adds two strings
 * @dest: string input 1
 * @src: string input 2
 * Return: two strings
 */

char *_strcat(char *dest, char *src)
{
    char *s = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (s);
}

/**
 * _strncmp - compares n characters in 2 strings
 * @s1: string input
 * @s2: string input
 * @n: characters to compare
 *
 * Return: 1 if different
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (s1 == NULL)
        return (-1);
    for (i = 0; i < n && s2[i]; i++)
    {
        if (s1[i] != s2[i])
        {
            return (1);
        }
    }
    return (0);
}

/**
 * _strdup - duplicates a string
 * @str:String
 * Return: Duplicate String Failed Null
 */

char *_strdup(char *str)
{
    size_t len, i;
    char *str2;

    len = _strlen(str);
    str2 = malloc(sizeof(char) * (len + 1));
    if (!str2)
    {
        return (NULL);
    }

    for (i = 0; i <= len; i++)
    {
        str2[i] = str[i];
    }

    return (str2);
}