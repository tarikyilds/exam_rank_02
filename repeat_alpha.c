#include "examrank02.h"

void    ft_putchar(int c)
{
    write(1, &c, 1);
}

void    repeat_chr(int count, char c)
{
    int i;

    i = 0;
    while (i < count)
    {
        ft_putchar(c);
        i++;
    }
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
                repeat_chr(argc[1][i] - 64, argc[1][i]);
            else if (argc[1][i] >= 97 && argc[1][i] <= 122)
                repeat_chr(argc[1][i] - 96, argc[1][i]);
            else
                ft_putchar(argc[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}