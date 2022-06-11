#include "examrank02.h"

char    rot_thrt(int c)
{
    if (c >= 97 && c <= 122)
    {
        c += 13;
        if (c > 122)
            c = (c - 122) + 96;
    }
    else if (c >= 65 && c <= 90)
    {
        c += 13;
        if (c > 90)
            c = (c - 90) + 64;
    }
    return (c);
}

int main(int arg, char **argc)
{
    int     i;
    char    c;

    if (arg == 2)
    {
        i = 0;
        while (argc[1][i] != '\0')
        {
            c = argc[1][i];
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                ft_putchar(rot_thrt(c));
            else
                ft_putchar(c);
            i++;
        }
    }
    ft_putchar('\n');
}

/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/