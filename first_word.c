#include "examrank02.h"

void    ft_putchar(int c)
{
    write(1, &c, 1);
}

void    first_word(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] <= 32)
        i++;
    while (str[i] != '\0' && str[i] > 32)
        ft_putchar(str[i++]);
}

int main(int arg, char **argc)
{
    if (arg == 2)
        first_word(argc[1]);
    ft_putchar('\n');
    return (0);
}