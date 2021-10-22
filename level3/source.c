#include <stdio.h>
#include <stdlib.h>

int     v()
{
    char    str[512];
    int     m;

    fgets(str, 512, stdin);
    m = printf(str);
    if (m == 64)
    {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");   
    }
    return (0);
}

int     main(int argc, char **argv)
{
    v();
    return (0);
}