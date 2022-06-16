#include "examrank02.h"

int     check_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else if (c >= 'A' && c <= 'Z')
        return (2);
    return (0);
}