#include "shell.h"

/**
 *_putchar - writes the character to stdout
 *@c: input
 *Return: character
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 *_strlen - gets length of string
 *@s: char
 *Return: always int
 */

int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        continue;
    }

    return (i);
}

/**
 *_itoa - converts int to char
 *@n: input
 *Return: always char
 */

char *_itoa(unsigned int n)
{
    int len = 0;
    int i = 0;
    char *s;

    len = intlen(n);
    s = malloc(len + 1);
    if (!s)
        return (NULL);

    *s = '\0';
    while (n / 10)
    {
        s[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }

    s[i] = (n % 10) + '0';
    rev_arr(s, len);
    s[i + 1] = '\0';
    return (s);
}

/**
 *rev_arr - Reverses arrays
 *@arr: input array
 *@len: length of array
 *Return: always void
 */

void rev_arr(char *arr, int len)
{
    int i;
    char tmp;

    for (i = 0; i < (len / 2); i++)
    {
        tmp = arr[i];
        arr[i] = arr[(len - 1) - i];
        arr[(len - 1) - i] = tmp;
    }
}