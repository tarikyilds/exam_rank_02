void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
#include<stdio.h>
int main(void)
{
    int a[] = {1, 2, 3, -1};
    int b[] = {4, 5, 6, -1};
    int i = 0;

    printf("a: (%p) - b: (%p)\n", a, b);
    ft_swap(a, b);
    printf("a: (%p) - b: (%p)\n", a, b);
    while (a[i] != -1)
    {
        printf("a: (%d) - b: (%d)\n", a[i], b[i]);
        i++;
    }
    
}*/