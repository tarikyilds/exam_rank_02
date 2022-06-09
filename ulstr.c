#include "examrank02.h"

void    ft_putchar(int c)
{
    write(1, &c, 1);
}

int main(int arg, char **argc)
{
    int i;

    if (arg == 2)
    {
        i = 0;
        while (argc[1][i] != '\0')
        {
            if (argc[1][i] >= 65 && argc[1][i] <= 90)
                ft_putchar(argc[1][i] + 32);
            else if (argc[1][i] >= 97 && argc[1][i] <= 122)
                ft_putchar(argc[1][i] - 32);
            else
                ft_putchar(argc[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}

/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "PeTEr PIpeR pICKeD A PeCK of pIckLEd PEPPers." | cat -e
pEteR piPEr PickEd a pEck OF PiCKleD peppERS.$
$>./ulstr "A pEcK OF picKLED pePPErS PeTEr PIpeR picked.  " | cat -e
a PeCk of PICkled PEppeRs pEteR piPEr PICKED.  $
$>./ulstr | cat -e
$
*/