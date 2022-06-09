#include "examrank02.h"

void    putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        write(1, &str[i++], 1);
}
/*
int main(void)
{
    putstr("tarik yildirim\n");
}*/