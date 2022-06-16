#include "examrank02.h"

int asciitoint(char *nb)
{
    int n;
    int i;

    i = 0;
    n = 0;
    while (nb[i] != '\0')
    {
        n *= 10;
        n += nb[i] - '0';
        i++;
    }
    return (n);
}