#include "examrank02.h"

int     check_char(char *repo, char c)
{
    int i;

    i = 0;
    while (repo[i] != '\0')
    {
        if (repo[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void    adding(char *repo, char *add, int i, int c)
{
    while (add[i] != '\0')
    {
        if (check_char(repo, add[i]))
            repo[c++] = add[i];
        i++;
    }
}

int main(int arg, char **argc)
{
    char    comb[2000];

    if (arg == 3)
    {
        adding(comb, argc[1], 0, 0);
        adding(comb, argc[2], 0, ft_strlen(comb));
        putstr(comb);
    }
    ft_putchar('\n');
}

/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/