#include <stdio.h>
#include <stdlib.h>
#include "ft_itoa_base.c"

int main()
{
    long long *i;
    char    *res;

    *i = 123;
    res = ft_itoa_base(*i, 16);
    printf("%s\n", res);
    printf("%p\n", i);
    return (0);
}