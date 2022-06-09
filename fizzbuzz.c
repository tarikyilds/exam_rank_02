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

void    ft_putnbr(int c)
{
    if (c <= 9)
        ft_putchar(c + 48);
    else
    {
        ft_putnbr(c / 10);
        ft_putchar(c % 10 + 48);
    }
}

int main(void)
{
    int index;

    index = 0;
    while (index <= 100)
    {
        if (index % 3 == 0 && index % 5 == 0)
            ft_putstr("fizzbuzz");
        else if (index % 5 == 0)
            ft_putstr("buzz");
        else if (index % 3 == 0)
            ft_putstr("fizz");
        else
            ft_putnbr(index);
        ft_putchar('\n');
        index ++;
    }
}