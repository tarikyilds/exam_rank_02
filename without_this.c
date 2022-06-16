#include "examrank02.h"

int check(int start, int len, int wto)
{
    if (wto < 0 || wto > 9)
        return (0);
    else if (start >= len)
        return (0);
    else if (start < 0 || len < 0)
        return (0);
    return (1);
}

int number(int start, int wto)
{
    int result;
    printf("start: %d için ", start);
    if (start <= 9 && start != wto)
    {
        printf("result: %d\n", start);
        return (start);
    }
    else if (start <= 9 && start == wto)
    {
        printf("result: 0\n");
        return (0);
    }
    result = 0;
    while (start > 9)
    {
        if (start % 10 != wto)
            result += start % 10;
        start /= 10;
    }
    if (start % 10 != wto)
        result += start % 10;
    printf("result: %d\n", result);
    return (result);
    
}

int without(int start, int len, int wto)
{
    int result;

    if (check(start, len, wto))
    {
        result = 0;
        while (start <= len)
        {
            result += number(start, wto);
            start++;
        }
        return (result);
    }
    return  (0);
}

int main(void)
{
    printf("Result: %d\n", without(0, 100, 1));
}