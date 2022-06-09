#include "examrank02.h"

int basamak_sayisi(int n)
{
    int count;

    count = 0;
    if (n < 0)
        n *= -1;
    if (n >= 0 && n <= 9)
        return (1);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

int neg_poz(int n){
    if (n < 0)
        return (1);
    else
        return (0);
}

char    *ft_itoa(int nbr)
{
    char    *dest;
    int     index;
    int     bas;
    int     last;

    index = 0;
    bas = basamak_sayisi(nbr);
    dest = (char *) malloc(sizeof(char) * (bas + neg_poz(nbr) + 1));
    if (dest == NULL)
        return (0);
    if (neg_poz(nbr)){
        dest[index++] = '-';
        nbr *= -1;
        bas++;
    }
    last = bas;
    while (index < bas){
        dest[bas - 1] = (nbr % 10) + 48;
        nbr /= 10;
        bas--;
    }
    dest[last] = '\0';
    return (dest);
}
/*
int main(void)
{
    char    *dest;
    
    dest = ft_itoa(123);
    printf("Sonuç: %s\n", dest);
    dest = ft_itoa(12365);
    printf("Sonuç: %s\n", dest);
    dest = ft_itoa(-123);
    printf("Sonuç: %s\n", dest);
    dest = ft_itoa(1);
    printf("Sonuç: %s\n", dest);
    dest = ft_itoa(0);
    printf("Sonuç: %s\n", dest);
    dest = ft_itoa(-3);
    printf("Sonuç: %s\n", dest);
    return (0);
}*/



/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/