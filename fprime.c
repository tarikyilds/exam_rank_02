#include "examrank02.h"

// 42 İstanbul (Tarık Yıldırım) - Login: tyildiri

int *prime_nums(int nb)
{
    int index;
    int c;
    int check;
    int count;
    int *dest;
    
    index = 2;
    count = 0;
    dest = (int *) malloc(sizeof(int) * nb);
    if (!dest)
        return (NULL);
    while (index <= (nb / 2))
    {
        c = 2;
        check = 0;
        while (c <= 9)
        {
            if (index % c == 0 && index != c)
                check = 1;
            c++;
        }
        if (check == 0)
        {
            dest[count] = index;
            count++;
        }
        index++;
    }
    dest[count] = -1;
    return (dest);
}

int *getp_factors(int nb, int *prime_nums)
{
    int i;
    int dest_i;
    int *dest;

    i = 0;
    dest_i = 0;
    dest = (int *) malloc(sizeof(int) * nb);
    if (!dest)
        return (NULL);
    while (nb >= 1)
    {
        if (nb % prime_nums[i] == 0){
            nb /= prime_nums[i];
            dest[dest_i] = prime_nums[i];
            dest_i++;
        }
        else{
            i++;
        }
    }
    dest[dest_i] = -1;
    return (dest);
}

void    write_primef(int *prime_factors)
{
    int index;

    index = 0;
    while (prime_factors[index] != -1)
    {
        if (prime_factors[index + 1] == -1)
            printf("%d", prime_factors[index]);
        else
            printf("%d*", prime_factors[index]);
        index++;
    }
}

int main(int arg, char** argc)
{
    int nb;
    int *primes_nb;
    int *prime_factors;

    if (arg == 2)
    {
        nb = atoi(argc[1]);
        if (nb < 0){
            printf("\n");
            return (0);
        }
        else if (nb == 1){
            printf("1\n");
            return (0);
        }
        else if (nb > 2147483647){
            printf("\n");
            return (0);
        }
        primes_nb = prime_nums(nb);
        prime_factors = getp_factors(nb, primes_nb);
        if (prime_factors[0] == -1)
            printf("%d", nb);
        else
            write_primef(prime_factors);
    }
    printf("\n");
    return (0);
}


/* Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/