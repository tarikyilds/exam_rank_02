#include "examrank02.h"

void    ft_putchar(int c)
{
    write(1, &c, 1);
}

int main(int arg, char **argc)
{
    int     i;
    char    *str;

    if (arg == 2)
    {
        i = 0;
        str = argc[1];
        while (str[i] != '\0')
        {
            if (str[i] == 'z')
                str[i] = 'a';
            else if (str[i] == 'Z')
                str[i] = 'A';
            else if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
                str[i] += 1;
            ft_putchar(str[i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}


/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/