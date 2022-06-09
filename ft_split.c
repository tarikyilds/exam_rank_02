#include "examrank02.h"

int wcount(char *str)
{
    int i;
    int c;

    i = 0;
    c = 0;
    if (str == NULL || str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] <= 32)
        {
            while (str[i] <= 32 && str[i] != '\0')
                i++;
            if (str[i] > 32 && str[i] != '\0')
                c++;
            else if (str[i] == '\0')
                break;
        }
        i++;
    }
    if (str[0] > 32 && str[0] != '\0')
        c++;
    return (c);
}

char    *new_po(char *str, int i, int last)
{
    int     index;
    char    *sonuc;

    index = 0;
    sonuc = (char *) malloc(sizeof(char) * (last - i) + sizeof(char));
    while (i < last)
        sonuc[index++] = str[i++];
    sonuc[index] = '\0';
    return (sonuc);
}

char    **ft_split(char *str)
{
    int i;
    int wco;
    int last;
    char    **sonuc;

    i = 0;
    wco = 0;
    sonuc = (char **) malloc(sizeof(char *) * wcount(str) + sizeof(char *));
    if (!sonuc)
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] > 32)
        {
            last = i;
            while (str[last] != '\0' && str[last] > 32)
                last++;
            sonuc[wco] = new_po(str, i, last);
            wco++;
            if (str[last] == '\0')
                break;
            i = last;
        }
        i++;
    }
    sonuc[wco] = NULL;
    return (sonuc);
}
/*
int ft_strlen(char *str)
{
    int index = 0;
    while (str[index] != '\0')
        index++;
    return (index);
}

 int		main(void)
 {
 	 char test[] = "\njrS58VHQ	\n   	p70fL		Kx2sRP0So3E4rC9  \n nebpv3J5ousO84Pa1HjUQOImUhjwZpGn	\n \n	X28iT7Ap9 	DIYAF9ZSpKcs0Rcv\n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ	\n2n8R9zUvZEtOwmqf\n	";
 	//char test[] = "DIYAF9ZSpKcs0Rcv \n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ	\n2n8R9zUvZEtOwmqf\n	";

    printf("char count: %d\n", ft_strlen(test));
 	char **arr = ft_split(test);

 	int i = 0;
    int chr_co = 0;
 	while (arr[i] != 0)
 	{
 		printf("[%s]\n", arr[i]);
        chr_co += ft_strlen(arr[i]);
 		++i;
 	}
    printf("char count: %d\n", chr_co);
 }*/
/*
int main(void)
{
    char    **sonuc;
    char    str[] = "Lorem ipsum dolor sit amet, commodo nau nau. 123 --- &&& AASDASDAS HDGFG";
    printf("Char Count S: %d\n", ft_strlen(str));
    int index = 0;
    int last = wcount(str);
    int fcharco = 0;
    printf("Kelime Sayısı: %d\n", wcount(str));
    sonuc = ft_split(str);
    while (index < last)
    {
        printf("sonuc[%d]: %s\n", index, sonuc[index]);
        index++;
    }
    index = 0;
    last = wcount(str);
    while (index < last)
    {
        printf("%s", sonuc[index]);
        fcharco += ft_strlen(sonuc[index]);
        index++;
    }
    printf("\n");
    printf("Char Count S: %d\n", fcharco);
}*/


/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/