#include "examrank02.h"

char    *check_strs(char *first, char *kontrol)
{
    int i;

    i = 0;
    while (first[i] != '\0')
    {
        if (first[i] != kontrol[i])
        {
            first[0] = '\0';
            break;
        }
        i++;
    }
    return (first);
}

int main(int arg, char **argc)
{
    char    kontrol[200];
    int     i;
    int     c;

    if (arg == 3)
    {
        i = 0;
        c = 0;
        while (argc[1][i] != '\0')
        {
            while (argc[2][c] != '\0')
            {
                if (argc[2][c] == argc[1][i])
                {
                    kontrol[i] = argc[2][c];
                    break;
                }
                c++;
            }
            i++;
        }
        putstr(check_strs(argc[1], kontrol));
    }
    ft_putchar('\n');
}

/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/