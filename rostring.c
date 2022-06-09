#include "examrank02.h"

void    ft_putchar(int c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
        ft_putchar(str[index++]);
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

int     word_count(char *str)
{
    int i;
    int count;

    if (str[0] == '\0')
        return (0);
    i = count = 0;
    while (str[i] != '\0')
    {
        if ((str[i] == ' ' && str[i + 1] != ' ') || (str[i] <= 13 && str[i + 1] > 13))
            count++;
        i++;
    }
    if (str[0] != ' ' && str[0] > 13)
        count++;
    return (count);
}

char    *ft_strtrim(char *str)
{
    char    *dest;
    int     size;
    int     i;
    int     j;

    i = 0;
    if (str[i] == '\0' || str == NULL)
        return (str);
    size = ft_strlen(str);
    dest = (char *) malloc(sizeof(char *) * size + 1);
    if (dest == NULL)
        return (NULL);
    while (str[i] != '\0' && (str[i] <= 13 || str[i] == ' '))
        i++;
    while (str[size] <= 13 || str[size] == ' ')
        size--;
    j = 0;
    while (i <= size)
        dest[j++] = str[i++];
    dest[i] = '\0';
    return (dest);
}

char    **wsplit(char *str)
{
    char    **words;
    char    *new_item;
    int     size;
    int     i;
    int     j;
    int     c;

    i = 0;
    j = 0;
    size = word_count(str);
    words = (char **) malloc(sizeof(char *) * (size + 1));
    if (words == NULL)
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] > 13)
        {
            c = 0;
            new_item = (char *) malloc(sizeof(char) * 250);
            while (str[i] != '\0' && (str[i] != ' ' && str[i] > 13))
                new_item[c++] = str[i++];
            new_item[c] = '\0';
            words[j] = new_item;
            j++;
        }
        i++;
    }
    words[j] = NULL;
    return (words);
    
}

char    *str_birlestir(char *first, char *sec)
{
    char    *dest;
    int     i;
    int     j;

    i = 0;
    j = 0;
    dest = (char *) malloc(sizeof(char) * (ft_strlen(first) + ft_strlen(sec) + 2));
    while (first[i] != '\0')
    {
        dest[i] = first[i];
        i++;
    }
    dest[i] = ' ';
    i++;
    while (sec[j] != '\0')
        dest[i++] = sec[j++];
    dest[i] = '\0';
    return (dest);
}

int main(int arg, char **argc)
{
    char    *str;
    char    **words;
    int     index;

    if (arg > 1)
    {
        index = 0;
        /*str = "Que la      lumiere soit et la lumiere fut";
        str = "     AkjhZ zLKIJz , 23y";
        (void)argc;*/
        str = argc[1];
        str = ft_strtrim(str);
        words = wsplit(str);
        str[index] = '\0';
        index++;
        while (words[index] != NULL)
            str = str_birlestir(str, words[index++]);
        str = str_birlestir(str, words[0]);
        ft_putstr(ft_strtrim(str));
        free(str);
        free(words);
    }
    ft_putchar('\n');
    return (0);
}

/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/