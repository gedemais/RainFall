#include <stdio.h>
#include <stdlib.h>

void    v()
{
    char    *str;
    int     m;

    fgets(str, 512, stdin);
    m = printf(str);
    if (m == 64)
    {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");   
    }
}

int     main(int argc, char **argv)
{
    v();
    return (0);
}