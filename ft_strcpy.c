#include<unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

#include<stdio.h>
int main(void)
{
    char    src[] = "tarik";
    char    dest[] = "yildirim";
    printf("Sonuç: %s\n", ft_strcpy(dest, src));
}