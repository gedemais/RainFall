#include <stdio.h>
#include <stdlib.h>

void    o(void)
{
    system("/bin/sh");
    exit(1);
}

void    n(void)
{
    char    str[520];

    fgets(str, 512, stdin);
    printf(str);
    exit(1);
}

int     main(int argc, char**argv)
{
    n();
    return (0);
}