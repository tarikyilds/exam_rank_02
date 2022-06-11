#include "examrank02.h"

int main(int arg, char **argc)
{
    int size;

    if (arg == 2)
    {
        size = ft_strlen(argc[1]) - 1;
        while (size >= 0)
            ft_putchar(argc[1][size--]);
    }
    ft_putchar('\n');
}

/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/