#include "examrank02.h"

void    ft_putnbr(int nb)
{
    if (nb == 2147483647)
    {
        ft_putchar(2 + '0');
        nb = 147483647;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb <= 9)
        ft_putchar(nb + '0');
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
}

/*int main(void)
{
    ft_putnbr(2147483647);
    ft_putchar('\n');
    ft_putnbr(9);
    ft_putchar('\n');
    ft_putnbr(11);
    ft_putchar('\n');
    ft_putnbr(123);
    ft_putchar('\n');
    ft_putnbr(-3);
    ft_putchar('\n');
    ft_putnbr(-35);
    ft_putchar('\n');
    ft_putnbr(-789);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
}*/