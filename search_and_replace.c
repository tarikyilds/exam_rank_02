#include "examrank02.h"

int search_check(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    ft_putchar('\n');
    exit(1);
}

int main(int arg, char **argc)
{
    int i;
    
    if (arg == 4)
    {
        if (search_check(argc[1], argc[2][0]))
        {
            while (argc[1][i] != '\0')
            {
                if (argc[1][i] == argc[2][0])
                    argc[1][i] = argc[3][0];
                ft_putchar(argc[1][i]);
                i++;
            }
        }
    }
    ft_putchar('\n');
}

/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre

$>./search_and_replace "zaz" "art" "zul" | cat -e
$

$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$

$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$

$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$

$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/